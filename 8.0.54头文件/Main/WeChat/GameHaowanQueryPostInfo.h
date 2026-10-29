@interface GameHaowanQueryPostInfo : GameHaowanBasePostInfo
{
    BOOL _isBroken; // +0x30
    NSString * _postId; // +0x38
}
+ (id)createFromDbItem:(id)arg1;
- (id)postId;
- (void)setPostId:(id)arg1;
- (BOOL)isBroken;
- (void)setIsBroken:(BOOL)arg1;
- (void).cxx_destruct;
@end

