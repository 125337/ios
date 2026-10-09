# Frida 动态取证标杆（本项目实证版）

> 适用环境：Windows + Frida 17.18.0 + iPhone 真机 USB + 微信 8.0.60（双微信共存）
> 目标进程：按 bundle id `com.tencent.xin` 精确匹配
> 模板脚本：`scripts/frida_wcr_corner.js`（setter+backtrace 归属）、`scripts/frida_margin.js`（几何链 dump）、`scripts/frida_wcr_corner.py`（runner）

---

## 一、总原则

1. **纯原生 C API 模式**，不用 ObjC bridge。Frida 17 在 `create_script` 场景下 `require('frida-objc-bridge')` 必报 `require is not defined`（QJS/v8 都试过），frida-compile 打包也绕不通。全部用 `objc_getClass / sel_registerName / class_getInstanceMethod / method_getImplementation / objc_msgSend` 的 NativeFunction。
2. **取证探针只读不写**：只 dump 状态、不做任何修改，避免改变目标行为。
3. **必须有帽（cap）+ 去重**：cell dump 按指针去重（`seenCells[obj.toString()]`），总帽 25~40 条，防止输出爆炸和拖垮目标进程。
4. **分段 try/catch**：每个 dump 块用 `T('标签', function(){...})` 包裹，一块挂了不影响其他块。
5. **探针用完即停**：后台任务残留的探针继续挂在微信上，随时可能把进程带崩。换探针前先确认旧任务已终止。

## 二、Python runner 标准写法

模板 `scripts/frida_wcr_corner.py`，要点：

```python
# 1. 按 bundle id 精确匹配（双微信共存时 pid 会错）
for a in dev.enumerate_applications():
    if a.identifier and a.identifier.lower() == "com.tencent.xin": ...

# 2. attach 重试：USB 首连偶发 TransportError/timeout，6 次 × 2s
# 3. 默认 QJS runtime：create_script(src) 不传 runtime
# 4. 必须 python -u 运行：stdout 非 TTY 有缓冲，否则输出文件 0 字节
```

运行方式：

```
python -u scripts\frida_wcr_corner.py frida_xxx.js    # argv[1] 传 js 文件名
```

用后台任务跑，`Start-Sleep` 几秒后读 job 的 output.log 确认挂载成功，再操作手机。

## 三、JS 探针标准骨架

```javascript
function findExp(name) {
    try { if (Module.findGlobalExportByName) return Module.findGlobalExportByName(name); } catch (e) {}
    try { return Module.findExportByName(null, name); } catch (e) { return null; }
}
var objc_getClass = new NativeFunction(getExp('objc_getClass'), 'pointer', ['pointer']);
var sel_registerName = new NativeFunction(getExp('sel_registerName'), 'pointer', ['pointer']);
// msgSend 按返回类型备齐（关键：返回类型错了直接崩或读到垃圾）
var msP   = new NativeFunction(getExp('objc_msgSend'), 'pointer', ['pointer', 'pointer']);
var msP1  = new NativeFunction(getExp('objc_msgSend'), 'pointer', ['pointer', 'pointer', 'pointer']);
var msU64 = new NativeFunction(getExp('objc_msgSend'), 'uint64', ['pointer', 'pointer']);
var msU1p = new NativeFunction(getExp('objc_msgSend'), 'pointer', ['pointer', 'pointer', 'uint64']);
var msB   = new NativeFunction(getExp('objc_msgSend'), 'bool',   ['pointer', 'pointer']);
var msB1  = new NativeFunction(getExp('objc_msgSend'), 'bool',   ['pointer', 'pointer', 'pointer']);
var msF64 = new NativeFunction(getExp('objc_msgSend'), 'double', ['pointer', 'pointer']);

function SEL(n) { return sel_registerName(Memory.allocUtf8String(n)); }
function CLS(n) { return objc_getClass(Memory.allocUtf8String(n)); }
```

### 3.1 hook IMP 时的参数规则（★★ 最高频踩坑）

Interceptor 挂的是 IMP，不是方法：

```
a[0] = self
a[1] = _cmd（SEL 指针，不是值！把它当值用会读到负数垃圾）
a[2] = 第一个实参
```

例如 `setMaskedCorners:` 的值在 `a[2].toInt32()`；`onEnter` 存 `this.self = a[0]`，`onLeave` 里读终态。

### 3.2 CGRect / 结构体返回值：一律 KVC + getValue:

QJS 下 CGRect 结构体返回的 NativeFunction **不可用**（报 not a function）。标准做法：

```javascript
var selGetValue = SEL('getValue:');
var valBuf = Memory.alloc(64);
function kvcRect(obj, key) {
    var keyNs = msP1(nsStringCls, selStrWithUTF8, Memory.allocUtf8String(key)); // key 必须是 NSString 对象
    var nv = msP1(obj, selKVC, keyNs);
    if (!nv || nv.isNull()) return null;
    msP1(nv, selGetValue, valBuf);   // -(void)getValue:(void*)buf
    return [valBuf.readDouble(), valBuf.add(8).readDouble(),
            valBuf.add(16).readDouble(), valBuf.add(24).readDouble()];
}
// frameOf(v) = kvcRect(v, 'frame')
```

**KVC 的 key 传裸 C 字符串必崩**（access violation 0x656d6172...，就是 ASCII "frame"——被当对象解引用了）。必须 `stringWithUTF8String:` 建 NSString，全局缓存复用。

### 3.3 字符串读取

- `Memory.readUtf8String` 在 Frida 17 **已移除** → 用 `NativePointer.readUtf8String()`（实例方法）
- NSString → C：`msP(nsStrPtr, selUTF8).readUtf8String()`（selUTF8 = `UTF8String`）
- 对任何指针调 msgSend 前先 `isNull()` 判空

### 3.4 返回类型陷阱

- `objectAtIndex:` 返回类型必须是 **pointer**（用 uint64 收会得到截断地址，后续 `isNull()` 报 not a function）
- `tag` / `count` / `section` 等 integer getter 用 `uint64` 收，`Number()` 转换后用

## 四、绝对禁止（会直接打崩进程）

1. **禁止钩 `objc_setAssociatedObject` 后对 key 发 msgSend**。关联对象的 key 大多是裸指针（`&staticVar`），不是 NSString——对它调 `UTF8String` 必崩（EXC_BAD_ACCESS），且 **JS try/catch 接不住原生崩溃**。本项目两次"挂钩子崩了"都是这个。归属取证改用 backtrace 模块区间比对。
2. **禁止 hook 被 MSHook 改写过 IMP 的方法**。Mio/WCR 已 MSHook 的方法（如 `MMTableViewCell layoutSubviews`），Frida 报 `unable to intercept function`。**解法：钩基类**（`UITableViewCell layoutSubviews` 基类 IMP 没被动过，子类调 super 时能抓到；dump 时机在 orig 路径里，注意可能是插件 shim 处理前的状态）。
3. 禁止对未验证是对象的指针调任何 msgSend——同 1，try/catch 无效。

## 五、模块归属取证（判断是哪个 dylib 干的）

```javascript
// 启动时枚举一次
Process.enumerateModules().forEach(function (m) {
    var n = m.name.toLowerCase();
    if (n.indexOf('wcrefine') >= 0) wcrRanges.push([m.base, m.base.add(m.size), m.name]);
    else if (n.indexOf('mio') >= 0) mioRanges.push([m.base, m.base.add(m.size), m.name]);
});
// hook 内 backtrace 归属（FUZZY 够用，跳过第 0 帧=被钩函数自己）
function btOwner(ctx) {
    var frames = Thread.backtrace(ctx, Backtracer.FUZZY);
    for (var i = 1; i < frames.length; i++) { /* 命中模块区间 → 返回 'Mio'/'WCR' + 偏移 */ }
}
```

注意：模块名匹配 `mio` 会误收微信自带的 `MOVStreamIO`（含 "mio"），归属区间要先人工核对枚举输出；key/名字过滤放前面，backtrace 放最后兜底。

## 六、几何/布局类取证套路（本项目验证最快路径）

1. **hook 基类 layoutSubviews 的 onLeave**，按指针去重 dump：
   - `cell.frame`（父视图坐标系）
   - **superview 链逐级类名 + frame**（链深给到 16，太浅会够不到 window——曾因链深 10 导致 windowW=0）
   - 沿链累加 origin 得绝对坐标 → 左右边距 = `absX` / `windowW - (absX + w)`，一行看出对称性
   - 链上遇到 UITableView 顺手 dump `bounds` 和 `tag≠0` 子视图（边框覆盖视图定位利器）
2. **加 window 过滤**：`[cell window]` 为 nil 的是复用池对象，跳过防垃圾数据。
3. **responder 链找 VC**：`nextResponder` 迭代到 UIViewController 子类，确认页面归属。
4. 一次取证两个状态（如"开/关"、"WCR 态/Mio 态"）时，**同一探针、同一页面、只换一个变量**，数据才可比。

## 七、标准工作流

1. 写探针（复制 `frida_margin.js` 骨架改 dump 逻辑）→ `python -u` 后台运行
2. 6 秒后读 log 确认 `[margin] hook ok`（hook 失败的类会打 err，属预期就忽略）
3. 手机操作目标页面（停 2 秒即可），回读 output.log
4. **换探针 / 结束前：先确认旧后台任务已终止**（残留探针 = 定时炸弹）
5. 结论落库：修复提交后，把新踩的坑补进项目记忆和本文档

## 八、快速排错表

| 症状 | 原因 | 解法 |
|---|---|---|
| `require is not defined` | Frida 17 无 ObjC bridge | 纯原生 C API 模式 |
| `ObjC is not defined` | 同上 | 同上 |
| `not a function`（msRect 调用处） | CGRect 结构体返回 QJS 不支持 | KVC + getValue: 缓冲 |
| access violation 0x656d6172... | KVC key 传了裸 C 字符串 | `stringWithUTF8String:` 建 NSString |
| maskedCorners 读到负数垃圾 | IMP 参数把 a[1](SEL) 当值 | 值在 a[2] |
| `subviews 枚举 not a function` | `objectAtIndex:` 用 uint64 收 | 返回类型改 pointer |
| 层名/字符串全空 | `Memory.readUtf8String` 已移除 | `ptr.readUtf8String()` 实例方法 |
| `unable to intercept function` | IMP 已被 MSHook 改写 | 钩基类方法 |
| attach TransportError/timeout | USB 首连抖动 | 6 次 × 2s 重试 |
| 输出文件 0 字节 | stdout 缓冲 | `python -u` |
| attach 到错的微信 | 双微信共存 | bundle id `com.tencent.xin` 精确匹配 |
| 微信随机崩 | 探针对非对象指针发 msgSend（典型：assoc key） | 删掉该 hook，勿信 try/catch |
| dump 全是预插件状态 | dump 在 orig 路径、shim 未跑完 | 以后一轮 layout 终态为准 / 多 dump 几轮 |
