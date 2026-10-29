@interface WCFinderLiveRosterSelectCell : MMTableViewCell
{
    UILabel * _groupName; // +0x8
    UIView * _separator; // +0x10
    UIImageView * _checkIconView; // +0x18
    long long _userInterfaceStyle; // +0x20
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)updateWithGroupName:(id)arg1 isLastLine:(BOOL)arg2 userInterfaceStyle:(long long)arg3;
- (void)toggle;
- (void)unToggle;
- (void)isCheckIconViewChecked:(BOOL)arg1;
- (id)groupName;
- (id)checkIconView;
- (id)separator;
- (id)getColorProxy;
- (void)setGroupName:(id)arg1;
- (void)setSeparator:(id)arg1;
- (void)setCheckIconView:(id)arg1;
- (long long)userInterfaceStyle;
- (void)setUserInterfaceStyle:(long long)arg1;
- (void).cxx_destruct;
@end

