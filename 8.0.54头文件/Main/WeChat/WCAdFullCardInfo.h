@interface WCAdFullCardInfo : NSObject <NSCoding>
{
    unsigned int _displayType; // +0x8
    unsigned int _markMaxAlpha; // +0xc
    unsigned int _titlePosition; // +0x10
    NSString * _title; // +0x18
    NSString * _descriptionText; // +0x20
    WCAdFullCardGestureInfo * _adGestureInfo; // +0x28
    NSString * _maskImg; // +0x30
    unsigned long long _maskImgDisappearTime; // +0x38
    NSString * _coverImg; // +0x40
    unsigned long long _coverImgAppearTime; // +0x48
    WCAdFullCardEndCoverInfo * _endCoverInfo; // +0x50
    WCAdFullCardLongPressGestureInfo * _longPressGestureInfo; // +0x58
    WCAdFullCardDragImageGestureInfo * _dragImageGestureInfo; // +0x60
    WCAdClickBarInfo * _adClickBarInfo; // +0x68
    WCAdCardBtnInfo * _adGestureClickActionInfo; // +0x70
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)hasCoverImage;
- (unsigned int)displayType;
- (void)setDisplayType:(unsigned int)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)descriptionText;
- (void)setDescriptionText:(id)arg1;
- (unsigned int)markMaxAlpha;
- (void)setMarkMaxAlpha:(unsigned int)arg1;
- (unsigned int)titlePosition;
- (void)setTitlePosition:(unsigned int)arg1;
- (id)adGestureInfo;
- (void)setAdGestureInfo:(id)arg1;
- (id)maskImg;
- (void)setMaskImg:(id)arg1;
- (unsigned long long)maskImgDisappearTime;
- (void)setMaskImgDisappearTime:(unsigned long long)arg1;
- (id)coverImg;
- (void)setCoverImg:(id)arg1;
- (unsigned long long)coverImgAppearTime;
- (void)setCoverImgAppearTime:(unsigned long long)arg1;
- (id)endCoverInfo;
- (void)setEndCoverInfo:(id)arg1;
- (id)longPressGestureInfo;
- (void)setLongPressGestureInfo:(id)arg1;
- (id)dragImageGestureInfo;
- (void)setDragImageGestureInfo:(id)arg1;
- (id)adClickBarInfo;
- (void)setAdClickBarInfo:(id)arg1;
- (id)adGestureClickActionInfo;
- (void)setAdGestureClickActionInfo:(id)arg1;
- (void).cxx_destruct;
@end

