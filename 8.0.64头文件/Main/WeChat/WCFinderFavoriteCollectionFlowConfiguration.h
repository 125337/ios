@interface WCFinderFavoriteCollectionFlowConfiguration : NSObject <UIContentConfiguration, WCFinderViewSizable, WCFinderDeleteActionExecutable>
{
    unsigned long long _identifier; // +0x8
    NSString * _coverURL; // +0x10
    NSString * _title; // +0x18
    long long _feedCount; // +0x20
    NSString * _avatarURL; // +0x28
    NSString * _nickname; // +0x30
    WCFinderAuthInfo * _authInfo; // +0x38
    unsigned long long _deleteMenuFlag; // +0x40
    id /* block */ _onDeleteAction; // +0x48
    NSString * _resolvedTitle; // +0x50
    CGSize _proposedSize; // +0x58
    CGSize _resolvedSize; // +0x68
}
- (id)init;
- (id)makeContentView;
- (id)updatedConfigurationForState:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)resolvedTitleWithWidth:(double)arg1;
- (id)_compositeStringWithMaxWidth:(double)arg1 title:(id)arg2 subtitle:(id)arg3 font:(id)arg4;
- (id)_calculateOptimalTitle:(id)arg1 maxWidth:(double)arg2 font:(id)arg3;
- (unsigned long long)identifier;
- (void)setIdentifier:(unsigned long long)arg1;
- (id)coverURL;
- (void)setCoverURL:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (long long)feedCount;
- (void)setFeedCount:(long long)arg1;
- (id)avatarURL;
- (void)setAvatarURL:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)authInfo;
- (void)setAuthInfo:(id)arg1;
- (unsigned long long)deleteMenuFlag;
- (void)setDeleteMenuFlag:(unsigned long long)arg1;
- (id /* block */)onDeleteAction;
- (void)setOnDeleteAction:(id /* block */)arg1;
- (CGSize)proposedSize;
- (void)setProposedSize:(CGSize)arg1;
- (CGSize)resolvedSize;
- (void)setResolvedSize:(CGSize)arg1;
- (id)resolvedTitle;
- (void)setResolvedTitle:(id)arg1;
- (void).cxx_destruct;
@end
