# XOS 1.5.9 · 头像骑在气泡上（AvatarAboveBubble）反编译报告

> 来源：`插件\XOS 1.5.9.dylib`，Ghidra 全量导出 `Desktop\ios_cc4BX\XOS反编译\groups\*.c`
> 本文逐行核验骑气泡渲染链路；置信度标注：✅=反编译实证，⚠️=结构推断待真机核对。
> 2026-10-17 二次核验：全部关键断言已逐行对照源码复核，两处标注错误已修正（§一 46 回退逻辑、§三 分支 A 方向），§二 ⚠️ 已实锤升级 ✅。

---

## 一、全链路总览

```
配置层
  mesMsgMergeAvatarAboveBubble / AvatarAboveAnyChat ─┐
                                                     ├→ FUN_00005038 决策（✅ 已核验）
  未设置时回退：FUN_000050c0（Other 偏离 46 → 骑；Other==46 且 Self 也偏离 → 骑；
                两者都是 46 → 不骑；比较带容差 DAT_00307dc0）┘
                          ↓
  装载器 FUN_0018da3c（一次性，DAT_003e9628 守卫）：
    条件 = coversEnabled && mesMsgMergeEnabled（两者都开才进骑模式）
    缓存 → DAT_003e95c8 = 骑模式总开关（渲染端只读这个槽位）
         → DAT_003e9630 = MessageOffsetOther（收方）
         → DAT_003e9638 = MessageOffsetSelf（发方）
         → TextMessageSubViewModel / MMCPLabel 类指针
                          ↓
  主配置装载 FUN_000828e0（一次性）：
    DAT_003e7b38 = ReverseAvatarDownOffset（钳位 ±100）
    DAT_003e7b28/30 = MessageOffsetSelf/Other
                          ↓
渲染层（每轮布局）
  ① 头像 Y 重定位 ×6 个子类副本（见 §二）
  ② 头像 X 跟随计算 FUN_001910c8（见 §三）
  ③ 延迟重申块 FUN_0019f3b8→FUN_0019f490（见 §四）
```

## 二、头像 Y 重定位（骑入深度）✅

六个子类副本（每 MessageCellView 子类一份钩子）：
`FUN_00097fa0 / 000981bc / 000ac078 / 000c6014 / 000c6480 / 000c671c`

结构（以 FUN_00097fa0 为准，行 37749-37818）：

```
门控（全部通过才动手）：
  FUN_000a89d8() ≠ 0                 ← "处于合并组"全局检查
  关联对象 A（合并状态标志）非零
  关联对象 B（头像显示标志）非零
  [cellView respondsToSelector:getHeadImageView]
  head 非空 && head 未隐藏（FUN_002978a0）

公式：
  targetY = (param_4 − 实测值) − 8.0 + ReverseAvatarDownOffset

应用：
  if (|当前y − targetY| > 1.0) {      ← 幂等守卫：位移<1pt 不动
      CATransaction begin
      setFrame(head, {x, targetY, w, h})
      CATransaction commit
  }
```

**关键点：`−8.0` 是硬编码的骑入深度**——头像默认下沉 8pt 压进气泡顶边；`ReverseAvatarDownOffset`（±100）在此基础上叠加微调。✅ 二次核验实锤：`dVar7 = FUN_00295600(head)` 即头像实测 y（FUN_.c L37792），公式 `(param_4 − 实测y) − 8.0 + DAT_003e7b38` 无歧义；同构公式在二进制中恰好出现 **6 处**，六副本同构确认。

## 三、头像 X 跟随（骑在气泡上的横向往复）✅

`FUN_001910c8`（行 40659-40748），骑模式下的头像 X 计算：

```
cell → viewModel → 合并位置 FUN_00191330 + 可骑判定 FUN_00191434

分支 A：头像可见（组首/独立行，即"骑"的那行）：
    measured = FUN_0019156c(cell, head, pos, vm)     ← 运行时实测
    收方(other, pos==0)：X = +2.0 − (MessageOffsetOther − measured)
    发方(self, pos≠0) ：X = −2.0 + (MessageOffsetSelf − measured)
        ← ±2.0 美学偏置，且 (offset − measured) 项两支镜像取反
分支 B：头像隐藏（组中/组尾行）：
    收方(other)：X = −MessageOffsetOther
    发方(self) ：X = +MessageOffsetSelf       ← 纯偏移（∓ 镜像）
分支 C：非骑模式：X = 关联对象缓存的旧值（兼容旧路径）
```

**这就是"骑"的本质：气泡被 MessageOffset 横向推进头像列下方，头像用同一个偏移跟随（±2pt 美学偏置 + 实测修正），落座在气泡上。** 头像不是钉死的，是每轮按实测重算。

## 四、延迟重申 / 视图查找 ✅

- `FUN_0019f3b8(cell)`：骑模式下派发异步块（弱引用包装 `FUN_0019f490`：重入自身 + 清关联对象）——**下一轮再校准一次并自清**的延迟重申模式
- `FUN_0019f65c(view, depth)`：递归子树查找（深度≤6），找第一个响应 `viewModel:`+`getHeadImageView:` 的视图——从任意容器视图定位消息 cell 的通用手段
- `FUN_00191fd0(cell, &out)`：骑模式下头像微裁辅助：按方向查 DAT_003e95b0/B8 标志，`out = max(0, 4 − DAT_003e9598) − 4`（0~4pt 的贴边微调）

## 五、对 MioPlugin 自摆阶段的可移植设计

| XOS 做法 | 移植要点 |
|---|---|
| 骑=Y 下沉 8pt + 百分比微调 | 自摆的 avatar.frame.y 直接可写，8pt 起步再按需加 mmAvatarRideDepth |
| X = ±2 + (offset − 实测) | **实测修正**正是你 applyOwnLayout 的基准缓存模式——同一思想，XOS 用一次测量代替缓存 |
| \|Δ\|>1pt 才写帧 | 幂等守卫照搬，防每轮冗余写入 |
| CATransaction 包裹 | 防隐式动画抖动 |
| 延迟重申块+自清 | 复用/时序边角的兜底——你现有失效检测的补充手段 |
| 6 子类 ×1 副本 | 你已有四媒体子类钩子基建，同构 |

**注意差异**：XOS 骑模式只动头像（X/Y），气泡靠 MessageOffset 主动让位，**没有**改 bg 尺寸——与 diag33 的"bg 恒占满片"一致，XOS 也绕开了行内垂直几何的正面接管，只在头像上做文章。
