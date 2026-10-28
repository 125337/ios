@interface WCFinderCreateUserViewModel : NSObject
{
    NSString * _curPoiCountry; // +0x8
    NSString * _curPoiProvince; // +0x10
    NSString * _curPoiCity; // +0x18
    unsigned long long _maxWordCount; // +0x20
    unsigned long long _minWordCount; // +0x28
    long long _weixinSexType; // +0x30
}
+ (id)genAgreementContent;
- (id)init;
- (void)updateWithUserPrepareCache;
- (BOOL)validateName:(id)arg1;
- (BOOL)isStringEmpty:(id)arg1;
- (BOOL)isInvalidInputErrCode:(int)arg1;
- (id)tipsWithErrCode:(int)arg1;
- (BOOL)needVerifyName:(int)arg1;
- (BOOL)hitNameProtect:(int)arg1;
- (void)fetchLocationAddressCodeWithCompletion:(id /* block */)arg1 failed:(id /* block */)arg2;
- (long long)weixinSexType;
- (id)curPoiCountry;
- (void)setCurPoiCountry:(id)arg1;
- (id)curPoiProvince;
- (void)setCurPoiProvince:(id)arg1;
- (id)curPoiCity;
- (void)setCurPoiCity:(id)arg1;
- (unsigned long long)maxWordCount;
- (void)setMaxWordCount:(unsigned long long)arg1;
- (unsigned long long)minWordCount;
- (void)setMinWordCount:(unsigned long long)arg1;
- (void)setWeixinSexType:(long long)arg1;
- (void).cxx_destruct;
@end
