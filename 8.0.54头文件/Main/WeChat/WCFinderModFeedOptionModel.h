@interface WCFinderModFeedOptionModel : NSObject
{
    unsigned int _actionScene; // +0x8
    NSString * _contentDesp; // +0x10
    NSString * _coverUrl; // +0x18
    NSString * _fullCoverUrl; // +0x20
    NSMutableArray * _coverUrlWord; // +0x28
    NSMutableArray * _shortTitleArray; // +0x30
}
- (id)init;
- (id)description;
- (unsigned int)actionScene;
- (void)setActionScene:(unsigned int)arg1;
- (id)contentDesp;
- (void)setContentDesp:(id)arg1;
- (id)coverUrl;
- (void)setCoverUrl:(id)arg1;
- (id)fullCoverUrl;
- (void)setFullCoverUrl:(id)arg1;
- (id)coverUrlWord;
- (void)setCoverUrlWord:(id)arg1;
- (id)shortTitleArray;
- (void)setShortTitleArray:(id)arg1;
- (void).cxx_destruct;
@end

