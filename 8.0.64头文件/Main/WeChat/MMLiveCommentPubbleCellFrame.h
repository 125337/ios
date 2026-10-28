@interface MMLiveCommentPubbleCellFrame : NSObject
{
    BOOL _isBarrageItem; // +0x8
    BOOL _isContentExpand; // +0x9
    NSNumber * _contentLineNumberForMsgTypeUser; // +0x10
    NSNumber * _maxWidthNumForMsgTypeUser; // +0x18
    NSString * _layoutIdentityKey; // +0x20
    double _layoutStandardWidth; // +0x28
    id <MMLiveCommentPubbleCellFrameChangeDelegate> _delegate; // +0x30
    NSMutableDictionary * _cellSizeDict; // +0x38
    NSMutableDictionary * _cellExpandSizeDict; // +0x40
    NSMutableDictionary * _nickNameSizeDict; // +0x48
    NSMutableDictionary * _contentSizeDict; // +0x50
    NSMutableDictionary * _contentExpandSizeDict; // +0x58
    NSArray * _contentArrStylesPortrait; // +0x60
    NSArray * _contentArrStylesLandscape; // +0x68
    NSMutableDictionary * _contentArrStylesDict; // +0x70
    NSMutableDictionary * _contentExpandArrStylesDict; // +0x78
    NSArray * _nickArrStylesPortrait; // +0x80
    NSArray * _nickArrStylesLandscape; // +0x88
    NSMutableDictionary * _nickArrStylesDict; // +0x90
    NSArray * _signArrStyles; // +0x98
    unsigned long long _pubbleUIType; // +0xa0
    MMLiveCommentDataItem * _commentItem; // +0xa8
    double _firstLineOriginX; // +0xb0
    MMLiveTaskId * _taskId; // +0xb8
    double _changeBGColorOffset; // +0xc0
    double _offsetWhenReuse; // +0xc8
    double _topSectionOffset; // +0xd0
    MMLiveCommentPubbleCellFrameExtraConfig * _extraConfig; // +0xd8
    CGSize _cellSizePortrait; // +0xe0
    CGSize _cellSizeLandscape; // +0xf0
    CGSize _nickNameSizePortrait; // +0x100
    CGSize _nickNameSizeLandscape; // +0x110
    CGSize _contentSizePortrait; // +0x120
    CGSize _contentSizeLandscape; // +0x130
    CGSize _signSize; // +0x140
    CGPoint _cellOrigin; // +0x150
}
+ (id)createTextView;
- (id)initWithTaskId:(id)arg1;
- (id)liveTask;
- (long long)layoutResult;
- (BOOL)isCurrentLayouted;
- (void)calculateIfNeeded;
- (BOOL)isUserTableStyle;
- (BOOL)isCombleTableStyle;
- (double)commmentTableWidth;
- (id)getCurrentUIStateInfo;
- (id)getDisplayStr:(id)arg1;
- (id)getNickNameStr:(id)arg1;
- (void)calculateWithCommentInfo:(id)arg1;
- (void)caculateSizeForComment:(id)arg1;
- (void)transferToPubbleUIType:(id)arg1;
- (CGSize)contentSize;
- (CGSize)nickNameSize;
- (CGSize)cellSize;
- (id)contentArrStyles;
- (id)nickArrStyles;
- (BOOL)isCommentContentMultiline;
- (id)getLayoutIdentifyKeyWithStandardWidth:(double)arg1;
- (id)cellSizeDict;
- (id)cellExpandSizeDict;
- (id)nickNameSizeDict;
- (id)contentSizeDict;
- (id)contentExpandSizeDict;
- (id)contentArrStylesDict;
- (id)contentExpandArrStylesDict;
- (id)nickArrStylesDict;
- (id)getCommentTextAttributeObj:(id)arg1;
- (BOOL)supportContentExpand;
- (void)setIsContentExpand:(BOOL)arg1;
- (BOOL)isBarrageItem;
- (void)setIsBarrageItem:(BOOL)arg1;
- (id)contentLineNumberForMsgTypeUser;
- (void)setContentLineNumberForMsgTypeUser:(id)arg1;
- (id)maxWidthNumForMsgTypeUser;
- (void)setMaxWidthNumForMsgTypeUser:(id)arg1;
- (id)layoutIdentityKey;
- (void)setLayoutIdentityKey:(id)arg1;
- (double)layoutStandardWidth;
- (void)setLayoutStandardWidth:(double)arg1;
- (CGSize)cellSizePortrait;
- (void)setCellSizePortrait:(CGSize)arg1;
- (CGSize)cellSizeLandscape;
- (void)setCellSizeLandscape:(CGSize)arg1;
- (BOOL)isContentExpand;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setCellSizeDict:(id)arg1;
- (void)setCellExpandSizeDict:(id)arg1;
- (CGSize)nickNameSizePortrait;
- (void)setNickNameSizePortrait:(CGSize)arg1;
- (CGSize)nickNameSizeLandscape;
- (void)setNickNameSizeLandscape:(CGSize)arg1;
- (void)setNickNameSizeDict:(id)arg1;
- (CGSize)contentSizePortrait;
- (void)setContentSizePortrait:(CGSize)arg1;
- (CGSize)contentSizeLandscape;
- (void)setContentSizeLandscape:(CGSize)arg1;
- (void)setContentSizeDict:(id)arg1;
- (void)setContentExpandSizeDict:(id)arg1;
- (id)contentArrStylesPortrait;
- (void)setContentArrStylesPortrait:(id)arg1;
- (id)contentArrStylesLandscape;
- (void)setContentArrStylesLandscape:(id)arg1;
- (void)setContentArrStylesDict:(id)arg1;
- (void)setContentExpandArrStylesDict:(id)arg1;
- (id)nickArrStylesPortrait;
- (void)setNickArrStylesPortrait:(id)arg1;
- (id)nickArrStylesLandscape;
- (void)setNickArrStylesLandscape:(id)arg1;
- (void)setNickArrStylesDict:(id)arg1;
- (CGSize)signSize;
- (void)setSignSize:(CGSize)arg1;
- (id)signArrStyles;
- (void)setSignArrStyles:(id)arg1;
- (unsigned long long)pubbleUIType;
- (void)setPubbleUIType:(unsigned long long)arg1;
- (id)commentItem;
- (void)setCommentItem:(id)arg1;
- (CGPoint)cellOrigin;
- (void)setCellOrigin:(CGPoint)arg1;
- (double)firstLineOriginX;
- (void)setFirstLineOriginX:(double)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (double)changeBGColorOffset;
- (void)setChangeBGColorOffset:(double)arg1;
- (double)offsetWhenReuse;
- (void)setOffsetWhenReuse:(double)arg1;
- (double)topSectionOffset;
- (void)setTopSectionOffset:(double)arg1;
- (id)extraConfig;
- (void)setExtraConfig:(id)arg1;
- (void).cxx_destruct;
@end
