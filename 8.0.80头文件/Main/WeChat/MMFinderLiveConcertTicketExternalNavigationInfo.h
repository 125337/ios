@interface MMFinderLiveConcertTicketExternalNavigationInfo : NSObject
{
    FinderJumpInfo * _jumpInfo; // +0x8
    NSString * _backgroundImageUri; // +0x10
    UIColor * _foregroundColor; // +0x18
    NSString * _title; // +0x20
    NSString * _iconUri; // +0x28
}
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (id)backgroundImageUri;
- (void)setBackgroundImageUri:(id)arg1;
- (id)foregroundColor;
- (void)setForegroundColor:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)iconUri;
- (void)setIconUri:(id)arg1;
- (void).cxx_destruct;
@end
