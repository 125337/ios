@interface GameLifeTabBarLogicController : MMObject
{
    GameCenterTabSettingControl_TabConfiguration * _defaultTabConfiguration; // +0x8
}
- (id)init;
- (void)initDefaultTabConfiguration;
- (id)getTabConfiguration;
- (id)getTabConfigurationFromGlobalConfig;
- (id)getTabStyleConfiguration;
- (void).cxx_destruct;
@end
