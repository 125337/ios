@interface WADebugSkylineViewCell : UITableViewCell
{
    WADebugSkylineOptions * _options; // +0x8
    long long _option; // +0x10
    UISwitch * _switchView; // +0x18
    UILabel * _labelView; // +0x20
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)config:(id)arg1;
- (void)onOptionChanged:(id)arg1;
- (void).cxx_destruct;
@end

