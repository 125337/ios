@interface MMMultiMenuTableViewCell : MMBaseMultiMenuTableViewCell <MMDropDelegate>
{
    MMDropManager * m_dropManager; // +0x38
    UIColor * _bkgColor; // +0x40
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)dropSessionDidEnter;
- (void)dropSessionDidExit;
- (id)bkgColor;
- (void)setBkgColor:(id)arg1;
- (void).cxx_destruct;
@end

