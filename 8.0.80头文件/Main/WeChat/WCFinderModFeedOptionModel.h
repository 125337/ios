@interface WCFinderModFeedOptionModel : NSObject
{
    unsigned int _actionScene; // +0x8
    int _coverShowStyle; // +0xc
    int _shareCoverShowStyle; // +0x10
    NSString * _contentDesp; // +0x18
    NSString * _fullCoverUrl; // +0x20
    NSString * _coverUrl; // +0x28
    NSMutableArray * _coverUrlWord; // +0x30
    NSString * _shareCoverUrl; // +0x38
    NSMutableArray * _shareCoverUrlWord; // +0x40
    NSMutableArray * _shortTitleArray; // +0x48
    FinderLocation * _location; // +0x50
    FinderEmojiInfo * _easterEgg; // +0x58
}
- (id)init;
- (id)description;
- (unsigned int)actionScene;
- (void)setActionScene:(unsigned int)arg1;
- (id)contentDesp;
- (void)setContentDesp:(id)arg1;
- (id)fullCoverUrl;
- (void)setFullCoverUrl:(id)arg1;
- (id)coverUrl;
- (void)setCoverUrl:(id)arg1;
- (int)coverShowStyle;
- (void)setCoverShowStyle:(int)arg1;
- (id)coverUrlWord;
- (void)setCoverUrlWord:(id)arg1;
- (id)shareCoverUrl;
- (void)setShareCoverUrl:(id)arg1;
- (int)shareCoverShowStyle;
- (void)setShareCoverShowStyle:(int)arg1;
- (id)shareCoverUrlWord;
- (void)setShareCoverUrlWord:(id)arg1;
- (id)shortTitleArray;
- (void)setShortTitleArray:(id)arg1;
- (id)location;
- (void)setLocation:(id)arg1;
- (id)easterEgg;
- (void)setEasterEgg:(id)arg1;
- (void).cxx_destruct;
@end
