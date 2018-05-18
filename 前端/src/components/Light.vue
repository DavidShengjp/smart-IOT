<template>
  <el-row style="display: flex;justify-content: center;">
    <el-button type="primary" round @click="changeLightStatus">{{lightStatusString}}</el-button>
  </el-row>
</template>
<script>
export default {
  data() {
    return {
      lightStatus: false
    }
  },
  computed: {
    lightStatusString() {
      if (this.lightStatus) return "开灯";
      else return "关灯";
    }
  },
  methods: {
    changeLightStatus() {
      this.lightStatus = !this.lightStatus;
      this.$socket.emit('light', this.lightStatus);
    }
  },
  sockets: {
    connect() {
      console.log("connected");
    }
  }
}

</script>
