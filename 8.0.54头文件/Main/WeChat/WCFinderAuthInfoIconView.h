@interface WCFinderAuthInfoIconView : MMWebImageView
{
    WCFinderAuthInfo * _authInfo; // +0x18
}
- (void)updateIconWithAuthInfo:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)updateIconWithAuthIconUrl:(id)arg1 authIconType:(unsigned long long)arg2;
- (void)setAuthInfo:(id)arg1;
- (id)accessibilityLabel;
- (id)authInfo;
- (void).cxx_destruct;
@end

