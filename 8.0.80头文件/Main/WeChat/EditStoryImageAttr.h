@interface EditStoryImageAttr : NSObject <NSCoding>
{
    BOOL _storyHideInTimeline; // +0x8
    BOOL _lyricsOn; // +0x9
    NSString * _mainText; // +0x10
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isStoryHideInTimeLine;
- (void)setStoryHideInTimeline:(BOOL)arg1;
- (BOOL)isLyricsOn;
- (void)setLyricsOn:(BOOL)arg1;
- (id)mainText;
- (void)setMainText:(id)arg1;
- (void).cxx_destruct;
@end
