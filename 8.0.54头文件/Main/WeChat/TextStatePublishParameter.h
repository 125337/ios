@interface TextStatePublishParameter : NSObject <PBCoding>
{
    BOOL _preserveLastPrivacy; // +0x8
}
+ (void)PBArrayAdd_preserveLastPrivacy;
+ (void)initialize;
+ (id)defaultParameter;
- (id)getPBPropertyTable;
- (BOOL)preserveLastPrivacy;
- (void)setPreserveLastPrivacy:(BOOL)arg1;
@end

