@interface WCFinderContactCoLiveAuthorDisplayInfo : WCFinderContactDisplayInfo
{
    WCFinderCoLiveAuthor * _coLiveAuthor; // +0x8
}
- (id)initWithContact:(id)arg1;
- (BOOL)shouldTruncateNickname;
- (id)displayAvatarUrl;
- (id)displayNickname;
- (id)truncationSuffix;
- (id)allNicknames;
- (id)displayNicknameWithMaxWidth:(double)arg1 font:(id)arg2;
- (id)coLiveAuthor;
- (void).cxx_destruct;
@end
