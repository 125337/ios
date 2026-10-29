@interface MJEffectEditInfo : NSObject <PBCoding, NSCopying>
{
    BOOL _enableEdit; // +0x8
    unsigned long long _scene; // +0x10
    NSString * _parentTemplateId; // +0x18
    NSString * _rootTemplateId; // +0x20
    NSString * _editWording; // +0x28
}
+ (void)PBArrayAdd_scene;
+ (void)PBArrayAdd_parentTemplateId;
+ (void)PBArrayAdd_rootTemplateId;
+ (void)PBArrayAdd_enableEdit;
+ (void)PBArrayAdd_editWording;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithEffectEditInfo:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)description;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)parentTemplateId;
- (void)setParentTemplateId:(id)arg1;
- (id)rootTemplateId;
- (void)setRootTemplateId:(id)arg1;
- (BOOL)enableEdit;
- (void)setEnableEdit:(BOOL)arg1;
- (id)editWording;
- (void)setEditWording:(id)arg1;
- (void).cxx_destruct;
@end
