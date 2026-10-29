@interface WCFinderExternalCommentModel : NSObject
{
    int _sourceScene; // +0x8
    NSString * _postContent; // +0x10
}
- (id)initWithPostContent:(id)arg1 sourceScene:(int)arg2;
- (BOOL)isValid;
- (id)postContent;
- (void)setPostContent:(id)arg1;
- (int)sourceScene;
- (void)setSourceScene:(int)arg1;
- (void).cxx_destruct;
@end

