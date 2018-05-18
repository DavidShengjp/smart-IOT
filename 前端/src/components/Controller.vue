<template>
  <div id="controller">
    <div class="line"></div>
    <el-menu :default-active="activeIndex" class="el-menu-demo" mode="horizontal" @select="handleSelect" background-color="#545c64" text-color="#fff" active-text-color="#ffd04b">
      <el-menu-item index="1">教室灯光管理系统</el-menu-item>
      <el-submenu index="2">
        <template slot="title">灯光管理</template>
        <el-submenu index="2-1">
          <template slot="title">A座</template>
          <el-menu-item index="2-1-1">1101</el-menu-item>
          <el-menu-item index="2-1-2">1201</el-menu-item>
          <el-menu-item index="2-1-3">1301</el-menu-item>
        </el-submenu>
        <el-submenu index="2-2">
          <template slot="title">B座</template>
          <el-menu-item index="2-2-1">2101</el-menu-item>
          <el-menu-item index="2-2-2">2201</el-menu-item>
          <el-menu-item index="2-2-3">2301</el-menu-item>
        </el-submenu>
        <el-submenu index="2-3">
          <template slot="title">C座</template>
          <el-menu-item index="2-3-1">3101</el-menu-item>
          <el-menu-item index="2-3-2">3201</el-menu-item>
          <el-menu-item index="2-3-3">3301</el-menu-item>
        </el-submenu>
        <el-submenu index="2-4">
          <template slot="title">D座</template>
          <el-menu-item index="2-4-1">4101</el-menu-item>
          <el-menu-item index="2-4-2">4201</el-menu-item>
          <el-menu-item index="2-4-3">4301</el-menu-item>
        </el-submenu>
        <el-submenu index="2-5">
          <template slot="title">E座</template>
          <el-menu-item index="2-5-1">5101</el-menu-item>
          <el-menu-item index="2-5-2">5201</el-menu-item>
          <el-menu-item index="2-5-3">5301</el-menu-item>
        </el-submenu>
      </el-submenu>
      <el-menu-item index="3"><a href="https://www.baidu.com" target="_blank">联系我们</a></el-menu-item>
    </el-menu>
    <img src="../../jpg/light.jpg">
  </div>
</template>
<script>
export default {
  data() {
    return {
      activeIndex: '1'
    };
  },

  methods: {
    handleSelect(key, keyPath) {
      console.log(key, keyPath);
    }
  }
}

</script>
