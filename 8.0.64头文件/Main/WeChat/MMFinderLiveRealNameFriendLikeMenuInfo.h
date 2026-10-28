@interface MMFinderLiveRealNameFriendLikeMenuInfo : NSObject
{
    BOOL _showButtonInForwardMenuSheet; // +0x8
    BOOL _isLiked; // +0x9
    unsigned long long _realnameLikeIconType; // +0x10
}
+ (id)menuInfoWithSvrButtonInfo:(id)arg1;
- (BOOL)showButtonInForwardMenuSheet;
- (void)setShowButtonInForwardMenuSheet:(BOOL)arg1;
- (BOOL)isLiked;
- (void)setIsLiked:(BOOL)arg1;
- (unsigned long long)realnameLikeIconType;
- (void)setRealnameLikeIconType:(unsigned long long)arg1;
@end
