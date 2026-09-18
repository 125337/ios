# 语音包"一直发送中"根因分析与修复方案

> 基于 MioPlugin(17).log 实测日志 + WCRefine2.1-2.dylib 静态反汇编（2026-09-18）
> 结论：m_uiStatus=1 本身没有错，错的是**入库之后没有任何一步把语音交给微信上传管线**。

---

## 一、问题现象（日志证据）

MioPlugin(17).log 中一次完整发送的关键行：

| 日志行 | 含义 |
|---|---|
| `[Send] 构造语音: 23740ms, wire 77009 字节` | silk 数据与时长解析正常 |
| `[Send] 语音路径: +getPathOfAudio: → .../Audio/5211.../0.aud` | 用 localID=0 拼的路径 |
| `[Send] SaveMesVoice 已调用 path=...0.aud localID=0` | **在 localID=0 时调用 SaveMesVoice** |
| `[Send] 入库: AddLocalMsg(6参精确, fixTime=1 notify=0)` | 之后才入库，localID=2574 |
| `[Send] 入库后路径补写成功: .../2574.aud` | 文件补写到正确路径 |
| `[Send] 2s状态=1 / 6s后状态=1` | 上传管线从未拾取，永久卡"发送中" |

现状调用顺序（VoicePackStore.m）：

```
构造 wrap(status=1) → 探测路径写 0.aud → SaveMesVoice(localID=0)
→ AddLocalMsg 6参(fixTime=1, notify=0) → 补写 2574.aud → 轮询状态（永远=1）
```

---

## 二、WCRefine 真实发送管线（反汇编还原）

本次通过修复 Mach-O 元类（metaclass）方法表解析，找到了此前"隐身"的发送实现。
`WCRefineVoicePackSender` 实为 4 个类方法（此前误判为 0 方法类）：

| 地址 | 方法 | 作用 |
|---|---|---|
| 0x138ff88 | `sendItem:toChatName:completion:` | 单条发送主入口 |
| 0x1391be0 | `sendItems:toChatName:completion:` | 批量发送 |
| 0x138fee8 | `sendFileAtPath:toFileHelperWithDisplayName:` | 文件方式兜底 |
| 0x138ed6c | `sendRepositoryCode:toChatName:` | 云仓库拉取后发送 |

真正的语音发送管线在无 ObjC 元数据的块调用函数区（0x818f00–0x8197b4），
逐指令反汇编还原出的**完整序列**：

### 2.1 构造 CMessageWrap（0x818f00–0x8190f0）

| 字段 | 值 | 说明 |
|---|---|---|
| m_uiMessageType | **34** | 语音消息 |
| m_nsFromUsr | `getSelfContact().m_nsUsrName` | 本人 wxid |
| m_nsToUsr | 目标会话名 | |
| m_uiCreateTime | 当前时间戳 | |
| m_uiStatus | **1** | 待发送（与 MioPlugin 一致，此值无错） |
| m_uiDownloadStatus | **0** | MioPlugin 未设置 |
| m_bForward | **1** | 标记为转发性质消息，MioPlugin 未设置 |
| m_uiVoiceTime | 秒数 | MioPlugin 未设置（memory 中记为"无 m_iVoiceTime"——实际字段名是 **m_uiVoiceTime**，setter 引用确凿存在） |
| m_uiVoiceFormat | **4** | silk |
| m_uiVoiceEndFlag | **1** | 语音完整性标志，MioPlugin 未设置 |
| m_uiVoiceForwardFlag | **1** | MioPlugin 未设置 |
| m_dtVoice | 当前时间 | MioPlugin 未设置 |
| m_nsContent | `<msg><voicemsg voicelength="%u" voiceformat="4" forwardflag="0" /></msg>` | 与 MioPlugin 现行模板完全一致 |

### 2.2 发送序列（0x8191c0–0x8197b4）★核心★

```
① [mgr AddLocalMsg:MsgWrap:]            ← 2 参版本！先入库，让微信分配真实 localID
② 读取 msgWrap.m_uiMesLocalID            ← 取回真实 localID
③ [mgr getAudioFileName:LocalID:]        ← respondsToSelector 守卫；让微信自己算正式 .aud 路径
④ createDirectory... + writeToFile:atomically:  ← silk 数据写入正式路径（仅写一次）
⑤ [wrap setM_nsVoicePath:]               ← 把正式路径写回 wrap
⑥ [mgr SaveMesVoice:MsgWrap:]            ← respondsToSelector 守卫；此时 localID/文件/路径三要素齐全，
                                            该调用才真正把语音登记进微信的语音上传体系
⑦ [mgr ResendVoiceMsg:MsgWrap:]          ← respondsToSelector 守卫；强制发送队列拾取
```

另一条并行路径（0x7fe900/0x800770 区，"转发语音"功能）结尾相同：
`AddMsg:MsgWrap: → m_uiMesLocalID → getVoicePath → 写文件 → setM_nsVoicePath: → SaveMesVoice → ResendVoiceMsg`。
两条路径殊途同归：**文件落正式路径 + m_nsVoicePath + SaveMesVoice + 重发触发**，这就是语音上传管线拾取消息的必要条件。

### 2.3 各 API 存在性（respondsToSelector 全程守卫）

WCRefine 对 ③⑥⑦ 全部先探测再调用，说明这些 API 在不同微信版本上存在性有差异。
本机微信实测（MioPlugin(17).log）：`SaveMesVoice:MsgWrap:` 存在；`ResendVoiceMsg:MsgWrap:`
在 MMServiceWrapper 代理上探测为 0（但不排除在其它 service 类上存在，MioPlugin 未逐一排查）；
**2 参版 `AddLocalMsg:MsgWrap:` 未测过**（此前只测了 6 参版）。

---

## 三、逐条对比：MioPlugin 错在哪

| # | 环节 | MioPlugin 现状 | WCRefine 做法 | 判定 |
|---|---|---|---|---|
| 1 | 入库时机 | AddLocalMsg 6参，**notify=0**（抑制新消息通知→发送队列不启动） | AddLocalMsg **2 参**，先入库 | ★根因① |
| 2 | 路径生成 | `+getPathOfAudio:` 自己猜，先写 0.aud 再补写 | `getAudioFileName:LocalID:` 让微信用真实 localID 算权威路径 | ★根因② |
| 3 | SaveMesVoice 时机 | **localID=0 时调用**（DB 行不存在，登记无效，等于白调） | 文件+路径+localID 三要素齐全后调用 | ★根因③ |
| 4 | m_nsVoicePath | 从未设置 | 显式 setter 写回 wrap | ★根因④ |
| 5 | 重发触发 | 无任何调用 | ResendVoiceMsg:MsgWrap:（守卫） | ★根因⑤ |
| 6 | 辅助字段 | 未设置 | downloadStatus=0 / bForward=1 / voiceEndFlag=1 / voiceForwardFlag=1 / voiceTime=秒 / dtVoice | 次要（建议补齐） |
| 7 | status 初值 | 1 | 1 | 无错 |
| 8 | XML 模板 | 同款 | 同款 | 无错 |
| 9 | silk wire（0x02 前缀） | 有 | 有（.aud 同格式） | 无错 |
| 10 | 副作用 | 0.aud 残留成孤儿文件 | 无（只写一次正式路径） | 建议消除 |

**一句话根因**：MioPlugin 把"登记语音（SaveMesVoice）"做在了入库之前（localID=0 无效调用），
入库又用 notify=0 把发送队列的通知关掉了，之后既没有设置 m_nsVoicePath 也没有任何重发触发——
消息在 DB 里是一行"发送中"的死数据，微信的上传管线从头到尾不知道它的存在。

---

## 四、修复方案（按优先级，只讲改什么，不含代码）

### P0 — 必改（四步缺一不可）

1. **调整顺序为"先入库、后落盘、再登记"**
   - 第一步：构造 wrap（status=1，字段按下表补齐）后，直接调 `AddLocalMsg:MsgWrap:`（**2 参版**，需先 respondsToSelector 探测；若本机微信不存在，退回 6 参版但 **NewMsgArriveNotify 必须传 1**，让新消息通知驱动发送队列）。
   - 第二步：从 wrap 读回真实 `m_uiMesLocalID`。
   - 第三步：优先用微信的 `getAudioFileName:LocalID:`（守卫探测）生成正式路径；不可用时再用现行的 `+getPathOfAudio:` 推导，但**只在拿到真实 localID 之后**拼路径。
   - 第四步：把 silk wire 写入正式路径（只写这一次），然后 `[wrap setM_nsVoicePath:]` 写回 wrap。
2. **补上收尾两连击**
   - 文件与路径就绪后调用 `SaveMesVoice:MsgWrap:`（本机已确认存在）。
   - 紧接着对 `ResendVoiceMsg:MsgWrap:` 做 respondsToSelector 探测，存在则调用；不存在时靠第 1 步的 notify 通路 + SaveMesVoice 兜底。
3. **废除 0.aud 预写**：localID=0 时写的任何文件都是孤儿，直接删除这段逻辑（顺带清理已产生的 0.aud 残留）。
4. **轮询逻辑保留**，但加一条失败观测：6s 后仍为 1 时，把 `m_nsVoicePath`、`m_uiMesLocalID`、文件是否存在与大小一并打进日志，为下一轮诊断留证据。

### P1 — 建议补齐（低成本，提高跨版本兼容）

5. 构造期补字段：`m_uiDownloadStatus=0`、`m_bForward=1`、`m_uiVoiceEndFlag=1`、`m_uiVoiceForwardFlag=1`、`m_dtVoice=now`、`m_uiVoiceTime=时长秒数`（setter 探测后设置，字段缺失时静默跳过——不同版本字段名可能是 m_uiVoiceTime/m_iVoiceTime）。
6. API 探测清单更新：把 **2 参 `AddLocalMsg:MsgWrap:`** 加入启动探测表；`ResendVoiceMsg:MsgWrap:` 探测范围从 MMServiceWrapper 扩展到按服务名逐个尝试（CMessageMgr/CMessageDBMgr 等命名类）。

### P2 — 观察项（不阻塞本次修复）

7. WCRefine 的 `sendItem:` 里还有"云仓库绑定发送"与"文件助手兜底"两条支路，与本次卡死无关，暂不引入。
8. 若 P0 全部落地后仍卡"发送中"，下一步排查方向是 `AddLocalMsg` 2 参与 6 参在本机微信上的行为差异（可用 hook 打印两条路径各自进入后的 m_uiStatus 变化时序对比）。

---

## 五、验证方法

1. 长按聊天加号 → 选语音包发送，观察气泡：应从"发送中"变为正常已发送，对方可听、时长正确。
2. 新日志预期关键行（按新顺序）：`入库 → localID=非0 → 正式路径落盘 → setM_nsVoicePath → SaveMesVoice → [ResendVoiceMsg] → 状态 1→2`。
3. 检查 `Documents/.../Audio/<md5>/` 下不再出现 0.aud 孤儿文件。
4. 对方收到后，用真实语音回复一条，对比日志中 `[真实语音]` 行确认 wire 格式一致。

---

## 六、本次逆向方法备注（供复用）

- 之前把 `WCRefineVoicePackSender/Store` 等判成"0 方法类"，是因为解析器只读了类本身的方法表；**类方法挂在元类（metaclass）上**，补读元类 baseMethods 后全部现身（Store 84 个、Sender 4 个）。
- category 解析：`__objc_catlist` 位于 `__DATA_CONST` 段（此前按 `__DATA` 找导致解包失败）；本二进制仅 2 个 category，与发送无关。
- 发送管线本体位于**无 ObjC 元数据的块调用函数区**（0x7e7350–0x8394ec），selref 引用的"归属方法"显示为 `.cxx_destruct` 是错误归属的信号；用逐指令盲解码（ADRP/ADD/LDR/BL/MOVZ）才还原出真实序列。
- 临时分析脚本与报告在 `C:\Users\20546\AppData\Local\Temp\wcr2\`（wcr3~wcr6、report_C/D/E/F.txt），确认无用后可删除。
