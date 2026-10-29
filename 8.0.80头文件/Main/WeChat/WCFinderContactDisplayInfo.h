@interface WCFinderContactDisplayInfo : NSObject <WCFinderContactDisplayInfoProtocol>
{
    WCFinderContact * _contact; // +0x8
}
- (id)initWithContact:(id)arg1;
- (BOOL)shouldTruncateNickname;
- (id)displayAvatarUrl;
- (id)displayNickname;
- (id)truncationSuffix;
- (id)displayNicknameWithMaxWidth:(double)arg1 font:(id)arg2;
- (id)contact;
- (void)setContact:(id)arg1;
- (void).cxx_destruct;
@end
