@interface PAGFont : NSObject
{
    NSString * fontFamily; // +0x8
    NSString * fontStyle; // +0x10
}
+ (id)RegisterFont:(id)arg1;
+ (id)RegisterFont:(id)arg1 family:(id)arg2 style:(id)arg3;
+ (id)RegisterFont:(void *)arg1 size:(unsigned long long)arg2;
+ (id)RegisterFont:(void *)arg1 size:(unsigned long long)arg2 family:(id)arg3 style:(id)arg4;
+ (void)UnregisterFont:(id)arg1;
- (void)dealloc;
- (id)fontFamily;
- (void)setFontFamily:(id)arg1;
- (id)fontStyle;
- (void)setFontStyle:(id)arg1;
@end

