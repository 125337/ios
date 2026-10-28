@interface MMFinderLiveConnectMicPkPanelSectionItem : NSObject
{
    unsigned long long _type; // +0x8
    unsigned long long _teamNumber; // +0x10
    unsigned long long _headerButtonType; // +0x18
    MMFinderLiveConnectMicUser * _micUser; // +0x20
    NSString * _headerTitle; // +0x28
}
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)teamNumber;
- (void)setTeamNumber:(unsigned long long)arg1;
- (unsigned long long)headerButtonType;
- (void)setHeaderButtonType:(unsigned long long)arg1;
- (id)micUser;
- (void)setMicUser:(id)arg1;
- (id)headerTitle;
- (void)setHeaderTitle:(id)arg1;
- (void).cxx_destruct;
@end
