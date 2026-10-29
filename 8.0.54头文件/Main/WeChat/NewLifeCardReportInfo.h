@interface NewLifeCardReportInfo : NSObject <NSCopying>
{
    BOOL _enableFinderLike; // +0x8
    unsigned int _position; // +0xc
    unsigned int _index; // +0x10
    int _commentScene; // +0x14
}
- (id)copyWithZone:(_NSZone *)arg1;
- (unsigned int)position;
- (void)setPosition:(unsigned int)arg1;
- (unsigned int)index;
- (void)setIndex:(unsigned int)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (BOOL)enableFinderLike;
- (void)setEnableFinderLike:(BOOL)arg1;
@end

