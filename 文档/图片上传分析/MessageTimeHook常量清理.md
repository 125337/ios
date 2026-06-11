# 死代码清理：常量 kMinContentViewWidth

## 问题

**文件**: `MioPlugin/Modules/MessageTime/MessageTimeHook.m`

## 死代码详情

| 常量 | 行号 | 当前引用数 | 判定 |
|------|------|-----------|------|
| `kMinContentViewWidth` | 第15行 | 仅定义处1行（第15行），**无任何外部引用** | ✅ 死代码 |

### 原因

- 该常量仅在已删除的 `getContentView` 函数中被使用（用于判断 contentView 的宽度是否过小）
- `getContentView` 被删除后，该常量再无任何引用点
- 其余代码（如 `repl_CommonMessageCellView_updateNodeStatus`）使用内联 KVC 获取 contentView，不依赖此常量

## 清理建议

**移除第15行**：

```objc
// 原代码
static const CGFloat kMinContentViewWidth      = 5.0;

// 移除后
// (整行删除)
```

## 清理后文件行号变化

删除后 `Constants` 区域将仅保留空注释标记。

## 测试验证

无需额外测试，该常量未影响任何功能逻辑。