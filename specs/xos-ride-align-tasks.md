# Tasks：XOS 骑行对齐实施

- [x] T1 MsgMergeHook.m：删除 olRideHeadY/olRideAnchorC/olRideExpand（L569-579），更新文件头注释 L548-553
- [x] T2 MsgMergeHook.m applyOwnLayout：头像骑行 y 改 `-8.0 + olClamp(depth,100)`（L695-699），更新 L682-684 注释
- [x] T3 MsgMergeHook.m：`double newDY = 0.0;`（L711-713），注释说明 lastDY 还原路径保留
- [x] T4 MsgMergeHook.m measure：删骑行扩行块（L946-969）、门控化简、更新头注释（L909-917）
- [x] T5 MsgMergeConfig.h：mmAvatarRideDepth 语义注释更新（.m 默认值确认 0）
- [x] T6 commit（commit_msg_tmp.txt 方式，提交后删）→ push → Actions 前台阻塞构建 → 下载 dist 制品（3526d36f，conclusion=success，dist\Mio_arm64.dylib）
- [ ] T7 用户装机对照验证；通过后另行清理 BG-DUMP 日志
