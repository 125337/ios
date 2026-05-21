/**
 * CydiaSubstrate 桩文件
 * 
 * MSHookMessageEx 在运行时由 libsubstrate.dylib 提供（已加载到 WeChat 进程）。
 * 本文件不定义该函数，仅作为编译单元占位。
 * 链接参数 -undefined dynamic_lookup 会让 dyld 在运行时解析到 libsubstrate.dylib。
 */
// 空实现 — 不定义 MSHookMessageEx