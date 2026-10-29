@interface TLProfileModel : NSObject
{
    long long _scene; // +0x8
    CContact * _contact; // +0x10
    WCDataItem * _dataItem; // +0x18
    id <TLProfileMediaViewProvider> _thirdPartyHandler; // +0x20
    UIImage * _normalImage; // +0x28
}
- (id)initWithScene:(long long)arg1 contact:(id)arg2;
- (void)reloadData;
- (void)requestDataIfNeeded;
- (id)thirdPartyHandler;
- (id)finderObjectID;
- (id)finderNonceID;
- (id)mediaView;
- (id)mediaCoverView;
- (id)headImageViewFor3rdParty;
- (id)descriptionFor3rdParty;
- (id)titleFor3rdParty;
- (BOOL)isInvalid;
- (BOOL)hidesBlurForShortHeightMedias;
- (BOOL)isEqual:(id)arg1;
- (long long)scene;
- (id)contact;
- (id)dataItem;
- (void)setThirdPartyHandler:(id)arg1;
- (id)normalImage;
- (void)setNormalImage:(id)arg1;
- (void).cxx_destruct;
@end

