<template>
  <div id="app">
    <Controller/>
    <Light/>
  </div>
</template>

<script>
import Controller from './components/Controller'
import Light from './components/Light'

export default {
  name: 'App',
  components: {
    Controller,
    Light
  }
}
</script>
