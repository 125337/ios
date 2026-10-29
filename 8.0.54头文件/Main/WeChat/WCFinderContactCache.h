@interface WCFinderContactCache : NSObject
{
    BOOL _hasSetLocation; // +0x8
    BOOL _hasSetSex; // +0x9
    UIImage * _creatingHeadImage; // +0x10
    WCFinderContact * _contact; // +0x18
}
- (id)init;
- (void)setCreatingNickName:(id)arg1;
- (void)setCreatingSignature:(id)arg1;
- (void)setNotShowLocation;
- (void)setShowLocationWithCountry:(id)arg1 province:(id)arg2 city:(id)arg3;
- (void)setNotShowSex;
- (void)setShowSex:(long long)arg1;
- (id)creatingNickName;
- (id)creatingSignature;
- (BOOL)isShowLocation;
- (id)locations;
- (BOOL)isShowSex;
- (int)sex;
- (id)creatingHeadImage;
- (void)setCreatingHeadImage:(id)arg1;
- (BOOL)hasSetLocation;
- (void)setHasSetLocation:(BOOL)arg1;
- (BOOL)hasSetSex;
- (void)setHasSetSex:(BOOL)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (void).cxx_destruct;
@end

