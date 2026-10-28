@interface MMTextWidth : NSObject
+ (void)setEnableFastPingFang:(BOOL)arg1;
+ (BOOL)isEnableFastPingFang;
+ (void)setEnable:(BOOL)arg1;
+ (void)setTextMeasureCallback:(void * *)arg1;
+ (BOOL)isEnable;
+ (BOOL)isReady;
+ (BOOL)isAvailable;
+ (void)update;
+ (void)setup;
+ (void)willEnterForeground:(id)arg1;
+ (void)didEnterBackground:(id)arg1;
+ (void)localeDidChanged:(id)arg1;
+ (void)fontDidChanged:(id)arg1;
+ (void)reset;
+ (void)clear;
+ (void)setEnableEmojiGroupCandidate:(BOOL)arg1;
+ (void)setChecksumCallback:(void * *)arg1;
+ (long long)stringHashLimit;
+ (unsigned short *)tlsBuffer;
+ (CGSize)boundingRectWithSize:(CGSize)arg1 attributes:(id)arg2 string:(id)arg3;
+ (CGSize)sizeWithAttributes:(id)arg1 string:(id)arg2;
+ (BOOL)isFontValid:(__CTFont *)arg1;
@end
