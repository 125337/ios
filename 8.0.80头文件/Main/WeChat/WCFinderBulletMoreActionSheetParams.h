@interface WCFinderBulletMoreActionSheetParams : NSObject
{
    BOOL _isInBlackList; // +0x8
    BOOL _isAuthorScene; // +0x9
    int _scene; // +0xc
    WCFinderBulletCommentInfo * _commentInfo; // +0x10
    WCFinderFeedContentVM * _contentVM; // +0x18
    unsigned long long _followButtonId; // +0x20
    id /* block */ _onClose; // +0x28
    id /* block */ _onDelete; // +0x30
    id /* block */ _onReport; // +0x38
    id /* block */ _onBlock; // +0x40
    id /* block */ _onRemoveBlock; // +0x48
    id /* block */ _onDismiss; // +0x50
}
- (id)commentInfo;
- (void)setCommentInfo:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (BOOL)isInBlackList;
- (void)setIsInBlackList:(BOOL)arg1;
- (BOOL)isAuthorScene;
- (void)setIsAuthorScene:(BOOL)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (unsigned long long)followButtonId;
- (void)setFollowButtonId:(unsigned long long)arg1;
- (id /* block */)onClose;
- (void)setOnClose:(id /* block */)arg1;
- (id /* block */)onDelete;
- (void)setOnDelete:(id /* block */)arg1;
- (id /* block */)onReport;
- (void)setOnReport:(id /* block */)arg1;
- (id /* block */)onBlock;
- (void)setOnBlock:(id /* block */)arg1;
- (id /* block */)onRemoveBlock;
- (void)setOnRemoveBlock:(id /* block */)arg1;
- (id /* block */)onDismiss;
- (void)setOnDismiss:(id /* block */)arg1;
- (void).cxx_destruct;
@end
