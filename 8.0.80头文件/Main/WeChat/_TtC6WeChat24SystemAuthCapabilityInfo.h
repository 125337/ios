@interface _TtC6WeChat24SystemAuthCapabilityInfo : NSObject
{
    unsigned int capability; // +0x8
}
- (unsigned int)capability;
- (id)initWithCapability:(unsigned int)arg1;
- (id)name;
- (id)imageName;
- (id)settingPageDescription;
- (id)instruction;
- (id)bizInfos;
- (id)authorizeTipTitleFor:(unsigned long long)arg1;
- (BOOL)isOverSeaLocationSensitiveWithScene:(unsigned long long)arg1;
- (BOOL)isContainsSceneWithScene:(unsigned long long)arg1;
- (id)init;
@end
