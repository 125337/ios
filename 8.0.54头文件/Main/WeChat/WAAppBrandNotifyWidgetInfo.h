@interface WAAppBrandNotifyWidgetInfo : NSObject <PBCoding>
{
    unsigned int _WidgetPkgType; // +0x8
    unsigned int _WidgePkgSize; // +0xc
    NSString * _WidgetPkgMd5; // +0x10
}
+ (void)PBArrayAdd_WidgetPkgType;
+ (void)PBArrayAdd_WidgetPkgMd5;
+ (void)PBArrayAdd_WidgePkgSize;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (unsigned int)WidgetPkgType;
- (void)setWidgetPkgType:(unsigned int)arg1;
- (id)WidgetPkgMd5;
- (void)setWidgetPkgMd5:(id)arg1;
- (unsigned int)WidgePkgSize;
- (void)setWidgePkgSize:(unsigned int)arg1;
- (void).cxx_destruct;
@end

