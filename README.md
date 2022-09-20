# FFmpegExtension

[English](README.md) | [简体中文](README.zh*Hans.md)

## 内容目录

<details>
  <summary>点我 打开/关闭 目录列表</summary>

- [FFmpegExtension](#ffmpegextension)
  - [内容目录](#内容目录)
  - [描述](#描述)
  - [背景](#背景)
  - [主要功能](#主要功能)
  - [贡献者](#贡献者)
  - [许可证](#许可证)

</details>

## 描述
此项目为 Unreal Engine 插件，基于 FFmpeg 库和 SDL 库开发，显著提升引擎的音视频开发能力

## 背景

在工作中经常遇到需要使用虚幻引擎播放视频的需求，虚幻社区也有许多优秀的开源插件可以使用:+1:，但这些插件的功能不太能应对策划的脑洞:cry:，于是决定基于ffmpeg开发虚幻引擎的多媒体插件，也借此机会学习一下音视频开发技术:grinning:。目前为早期版本，BUG一堆:sweat_smile:。

## 主要功能

1. <details>
   <summary>视频播放-----UVideoPlayer_FFmpeg</summary>

   * 视频播放
   * 循环播放
   * 暂停/恢复
   * 快进/快退
   * 跳转

   </details>

2. <details>
   <summary>音频播放-----UAudioPlayer_FFmpeg</summary>

   * 音频播放
   * 暂停/恢复

   </details>

3. <details>
   <summary>屏幕捕获-----UScreenCapture_FFmpeg</summary>

   * 录屏
  
   </details>
  
4. <details>
   <summary>媒体推流-----UStreamingServer_FFmpeg</summary>

   * 推流

   <details>

## 贡献者

<a href="https://github.com/xiaoqi3278/FFmpegExtension/graphs/contributors">
  <img src="https://contrib.rocks/image?repo=xiaoqi3278/FFmpegExtension" />
</a>

## 许可证