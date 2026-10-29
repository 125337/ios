@interface WCMomentsClickOptions : NSObject
{
    int _contactInfoScene; // +0x8
    NSMutableDictionary * _userInfo; // +0x10
    WCDataItem * _dataItem; // +0x18
    NSString * _urlString; // +0x20
    NSString * _backupUrlString; // +0x28
    long long _clickScene; // +0x30
    long long _adExposureScene; // +0x38
}
+ (id)clickOptions;
- (id)userInfo;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)urlString;
- (void)setUrlString:(id)arg1;
- (id)backupUrlString;
- (void)setBackupUrlString:(id)arg1;
- (long long)clickScene;
- (void)setClickScene:(long long)arg1;
- (int)contactInfoScene;
- (void)setContactInfoScene:(int)arg1;
- (long long)adExposureScene;
- (void)setAdExposureScene:(long long)arg1;
- (void).cxx_destruct;
@end

