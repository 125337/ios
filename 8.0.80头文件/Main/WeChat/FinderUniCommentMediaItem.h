@interface FinderUniCommentMediaItem : NSObject
{
    int _type; // +0x8
    CommentContentInfo * _contentInfo; // +0x10
}
- (int)type;
- (void)setType:(int)arg1;
- (id)contentInfo;
- (void)setContentInfo:(id)arg1;
- (void).cxx_destruct;
@end
