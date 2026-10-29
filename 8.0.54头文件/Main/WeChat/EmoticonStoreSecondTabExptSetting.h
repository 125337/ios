@interface EmoticonStoreSecondTabExptSetting : NSObject
{
    BOOL _isPaidStickers; // +0x8
}
+ (id)savePath;
- (id)initWithJsonString:(id)arg1;
- (BOOL)isPaidStickers;
- (void)setIsPaidStickers:(BOOL)arg1;
@end

