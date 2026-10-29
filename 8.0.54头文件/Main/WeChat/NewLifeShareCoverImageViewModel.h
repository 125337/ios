@interface NewLifeShareCoverImageViewModel : NSObject
{
    BOOL _ignoreNameSection; // +0x8
    BOOL _showRedPacket; // +0x9
    int _coverViewType; // +0xc
    WCFinderContact * _finderContact; // +0x10
    NSURL * _coverImageUrl; // +0x18
    NSString * _finderUsername; // +0x20
    NSString * _avatarImageUrlString; // +0x28
    NSString * _nickName; // +0x30
    NSString * _descText; // +0x38
    UIColor * _bgColor; // +0x40
    double _avatarLength; // +0x48
    double _aspectRatio; // +0x50
    double _nameInnerSpace; // +0x58
    UIFont * _nameFont; // +0x60
    UIFont * _descFont; // +0x68
    unsigned long long _photoCount; // +0x70
    UIFont * _albumLabelFont; // +0x78
    double _contentPadding; // +0x80
    NewLifePictureCropInfo * _coverCropInfo; // +0x88
    WCFinderShareToMomentsItem * _shareToMomentsItem; // +0x90
    CGSize _firstMediaSize; // +0x98
    CGSize _albumIconSize; // +0xa8
}
- (id)initWithShareItem:(id)arg1 coverViewType:(int)arg2;
- (void)initData;
- (double)estimateHeight:(double)arg1;
- (id)finderContact;
- (void)setFinderContact:(id)arg1;
- (id)coverImageUrl;
- (void)setCoverImageUrl:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)avatarImageUrlString;
- (void)setAvatarImageUrlString:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)descText;
- (void)setDescText:(id)arg1;
- (BOOL)ignoreNameSection;
- (void)setIgnoreNameSection:(BOOL)arg1;
- (id)bgColor;
- (void)setBgColor:(id)arg1;
- (double)avatarLength;
- (void)setAvatarLength:(double)arg1;
- (double)aspectRatio;
- (void)setAspectRatio:(double)arg1;
- (double)nameInnerSpace;
- (void)setNameInnerSpace:(double)arg1;
- (CGSize)firstMediaSize;
- (void)setFirstMediaSize:(CGSize)arg1;
- (id)nameFont;
- (void)setNameFont:(id)arg1;
- (id)descFont;
- (void)setDescFont:(id)arg1;
- (unsigned long long)photoCount;
- (void)setPhotoCount:(unsigned long long)arg1;
- (CGSize)albumIconSize;
- (void)setAlbumIconSize:(CGSize)arg1;
- (id)albumLabelFont;
- (void)setAlbumLabelFont:(id)arg1;
- (double)contentPadding;
- (void)setContentPadding:(double)arg1;
- (id)coverCropInfo;
- (void)setCoverCropInfo:(id)arg1;
- (BOOL)showRedPacket;
- (void)setShowRedPacket:(BOOL)arg1;
- (id)shareToMomentsItem;
- (void)setShareToMomentsItem:(id)arg1;
- (int)coverViewType;
- (void)setCoverViewType:(int)arg1;
- (void).cxx_destruct;
@end

