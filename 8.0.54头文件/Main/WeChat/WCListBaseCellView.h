@interface WCListBaseCellView : MMUIView <RichTextLayoutDelegate>
{
    WCCellGroup * m_group; // +0x8
    WCCellGroupItem * m_groupItem; // +0x10
    NSMutableArray * m_rowDatas; // +0x18
    WCDataItem * m_dataItem; // +0x20
    NSString * m_nsDescription; // +0x28
    BOOL m_bShowDateLabel; // +0x30
    BOOL m_bShowLock; // +0x31
    BOOL m_bIsTouchInContentView; // +0x32
    long long m_type; // +0x38
    UIView * m_infoContainerView; // +0x40
    MMUILabel * m_timeLabel; // +0x48
    UIView * m_cityLabel; // +0x50
    UIImageView * m_accessoryView; // +0x58
    UIView * m_contentView; // +0x60
    RichTextView * m_contentLabel; // +0x68
    UIImageView * m_failImageView; // +0x70
    UIImageView * m_starredImageView; // +0x78
    UIImageView * m_sharedImageView; // +0x80
    UIImageView * m_lockedImageView; // +0x88
    id <WCListViewRowViewDelegate> m_delegate; // +0x90
    long long _accessoryType; // +0x98
    NSIndexPath * _m_indexPath; // +0xa0
    long long _puzzleImageViewLayoutStyle; // +0xa8
}
+ (double)getTimeLabelWidthCurOri;
+ (double)getTimeLabelMarginLeftCurOri;
+ (double)getContentWidthWithCellWidth:(double)arg1;
+ (double)allStatusIconImageViewWidthWithGroup:(id)arg1 groupItem:(id)arg2;
+ (id)defaultContentLabel;
+ (double)maxContentWidthWithCellViewWidth:(double)arg1 accessoryType:(long long)arg2;
+ (BOOL)showsAccessoryView:(long long)arg1;
+ (id)defaultCityLabel;
+ (id)defaultTimeLabel;
+ (id)timeLabelAttributedStringWithGroup:(id)arg1;
+ (void)getTitle:(id *)arg1 subTitle:(id *)arg2 accessibiltyString:(id *)arg3 withGroup:(id)arg4;
+ (double)suitableContentHeightForGroup:(id)arg1 contentViewHeight:(double)arg2 shouldShowDate:(BOOL)arg3;
+ (double)minLeftPartHeightWithGroup:(id)arg1;
+ (double)getLayoutHeightWithGroup:(id)arg1 groupItem:(id)arg2 width:(double)arg3 isFirstOneInsection:(BOOL)arg4 isLastOneInSection:(BOOL)arg5;
+ (double)calculateHeightWithGroup:(id)arg1 groupItem:(id)arg2 width:(double)arg3 isFirstOneInsection:(BOOL)arg4 isLastOneInSection:(BOOL)arg5;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)setAccessoryType:(long long)arg1;
- (BOOL)showsAccessoryView;
- (void)layoutSubviews;
- (void)setGroupItem:(id)arg1 inGroup:(id)arg2;
- (void)initDateTimeLabel;
- (void)initAccessoryView;
- (void)initContentLabel;
- (void)initFailImageView;
- (void)initStatusIconImageView;
- (void)initStarredImageView;
- (void)initSharedImageView;
- (void)initLockedImageView;
- (void)layoutStatusIconImageView;
- (double)allStatusIconImageViewWidth;
- (id)generateStatusInfoWithDataItem:(id)arg1;
- (void)initView;
- (BOOL)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (BOOL)handleShouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (void)setNormalColor;
- (void)setHighlightedColor;
- (void)onClickEvent;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)updateAccessibility;
- (id)accessibilityComponents;
- (id)customAccessibilityComponents;
- (id)statusIconAccessibilityComponentsWithDataItem:(id)arg1;
- (id)m_group;
- (id)m_groupItem;
- (id)m_rowDatas;
- (id)m_nsDescription;
- (void)setM_nsDescription:(id)arg1;
- (BOOL)m_bShowDateLabel;
- (void)setM_bShowDateLabel:(BOOL)arg1;
- (BOOL)m_bShowLock;
- (void)setM_bShowLock:(BOOL)arg1;
- (long long)m_type;
- (void)setM_type:(long long)arg1;
- (id)m_infoContainerView;
- (void)setM_infoContainerView:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (long long)accessoryType;
- (id)m_indexPath;
- (void)setM_indexPath:(id)arg1;
- (long long)puzzleImageViewLayoutStyle;
- (void)setPuzzleImageViewLayoutStyle:(long long)arg1;
- (void).cxx_destruct;
@end

