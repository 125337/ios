@interface WAAppBrandNotifyModuleState : NSObject <PBCoding>
{
    BOOL _isAlreadyDownload; // +0x8
}
+ (void)PBArrayAdd_isAlreadyDownload;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (BOOL)isAlreadyDownload;
- (void)setIsAlreadyDownload:(BOOL)arg1;
@end
