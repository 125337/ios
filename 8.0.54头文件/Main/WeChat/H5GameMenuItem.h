@interface H5GameMenuItem : NSObject
{
    BOOL _isCustom; // +0x8
    unsigned int _itemId; // +0xc
    int _actionType; // +0x10
    unsigned int _placeId; // +0x14
    UIImage * _iconImg; // +0x18
    id _userInfo; // +0x20
    NSString * _title; // +0x28
    NSString * _thumbUrl; // +0x30
    NSString * _targetUrl; // +0x38
}
+ (id)initFromCustomMenuItem:(id)arg1;
- (BOOL)isValid;
- (id)getValidTitle;
- (id)toStandardMenuItem;
- (BOOL)isCustom;
- (void)setIsCustom:(BOOL)arg1;
- (id)iconImg;
- (void)setIconImg:(id)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (unsigned int)itemId;
- (void)setItemId:(unsigned int)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (int)actionType;
- (void)setActionType:(int)arg1;
- (id)targetUrl;
- (void)setTargetUrl:(id)arg1;
- (unsigned int)placeId;
- (void)setPlaceId:(unsigned int)arg1;
- (void).cxx_destruct;
@end

