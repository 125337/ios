@interface RightTopMenuItemBtnData : MMObject
{
    NSString * m_nsID; // +0x8
    NSString * m_nsTitleID; // +0x10
    NSString * m_nsImageName; // +0x18
    unsigned long long m_actionType; // +0x20
    NSString * m_nsActionName; // +0x28
    NSString * m_nsPluginUserName; // +0x30
}
+ (id)genItemWithID:(id)arg1 title:(id)arg2 imageName:(id)arg3 actionType:(unsigned long long)arg4 actionName:(id)arg5 pluginUserName:(id)arg6;
- (id)init;
- (id)m_nsID;
- (void)setM_nsID:(id)arg1;
- (id)m_nsTitleID;
- (void)setM_nsTitleID:(id)arg1;
- (id)m_nsImageName;
- (void)setM_nsImageName:(id)arg1;
- (unsigned long long)m_actionType;
- (void)setM_actionType:(unsigned long long)arg1;
- (id)m_nsActionName;
- (void)setM_nsActionName:(id)arg1;
- (id)m_nsPluginUserName;
- (void)setM_nsPluginUserName:(id)arg1;
- (void).cxx_destruct;
@end
