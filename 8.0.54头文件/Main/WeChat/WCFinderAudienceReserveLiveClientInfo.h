@interface WCFinderAudienceReserveLiveClientInfo : NSObject
{
    unsigned int _sourceType; // +0x8
    NSString * _commentscene; // +0x10
    NSString * _refPageType; // +0x18
    NSString * _actionResult; // +0x20
}
- (id)commentscene;
- (void)setCommentscene:(id)arg1;
- (unsigned int)sourceType;
- (void)setSourceType:(unsigned int)arg1;
- (id)refPageType;
- (void)setRefPageType:(id)arg1;
- (id)actionResult;
- (void)setActionResult:(id)arg1;
- (void).cxx_destruct;
@end

