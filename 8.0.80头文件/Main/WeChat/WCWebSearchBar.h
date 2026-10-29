@interface WCWebSearchBar : WCSearchBar
{
    BOOL _didExposedCancelButton; // +0x8
    BOOL _didExposedClearButton; // +0x9
    BOOL _didExposedCameraButton; // +0xa
    BOOL _voiceMicExcludesClearButton; // +0xb
    BOOL _greenMicLargeInputTransitionEnabled; // +0xc
    BOOL _notRespondActionButtonHidden; // +0xd
    BOOL _largeInputActionButtonCenterAlignmentEnabled; // +0xe
    BOOL _greenMicLargeInputTransitionPrepared; // +0xf
    BOOL _greenMicLargeInputExpandedHeightEnabled; // +0x10
    UIButton * _actionButton; // +0x18
    UIButton * _searchButton; // +0x20
    NSLayoutConstraint * _searchBoxHeightConstraint; // +0x28
    UIView * _seperatorView; // +0x30
    double _rightActionButtonInitialHorizontalOffset; // +0x38
    double _lastLargeInputClearButtonVerticalOffset; // +0x40
    UIView * _greenMicLargeInputTransitionOverlay; // +0x48
    UIView * _greenMicLargeInputBackgroundOverlay; // +0x50
    UIView * _greenMicLargeInputIconSnapshot; // +0x58
    UIView * _greenMicLargeInputTextSnapshot; // +0x60
    UIView * _greenMicLargeInputActionSnapshot; // +0x68
    NSString * _greenMicLargeInputTransitionText; // +0x70
}
- (id)initWithConfig:(CGRect)arg1 config:(id)arg2;
- (void)setVoiceMicExcludesClearButton:(BOOL)arg1;
- (void)setGreenMicLargeInputTransitionEnabled:(BOOL)arg1;
- (id)initWithConfig:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (double)expectSearchBarHeight;
- (CGRect)greenMicLargeInputFrameForView:(id)arg1;
- (id)greenMicLargeInputSnapshotForView:(id)arg1;
- (id)greenMicLargeInputBackgroundOverlayForView:(id)arg1;
- (void)clearGreenMicLargeInputTransitionPresentation;
- (void)clearGreenMicLargeInputTransitionPresentationRestoringActionButton:(BOOL)arg1;
- (void)cancelGreenMicLargeInputTransition;
- (BOOL)prepareGreenMicLargeInputTransition;
- (void)startGreenMicLargeInputTransition;
- (void)handoverClearButtonForGreenMicLargeInputTransition;
- (void)invalidateStaleTextPresentationForGreenMicLargeInputTransitionWithText:(id)arg1;
- (void)assembleSearchButtonWith:(id /* block */)arg1;
- (void)assembleRightActionButton:(id)arg1;
- (void)setRightActionButtonInitialHorizontalOffset:(double)arg1;
- (void)updateRightActionButtonInitialHorizontalOffset;
- (void)assembleRightActionButtonWithoutHidden:(id)arg1;
- (void)assembleRightSeperator;
- (void)setActionButtonHidden:(BOOL)arg1;
- (void)setActionButtonHiddenImmediately:(BOOL)arg1;
- (void)showsCancelButton:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setLargeInputActionButtonCenterAligned:(BOOL)arg1;
- (void)assembleLargeInputSearchButton;
- (void)switchToLargeInputBox;
- (void)updateLargeInputClearButtonVerticalAlignment;
- (void)layoutSubviews;
- (id)newTextField;
- (void)showClearButtonSpace:(BOOL)arg1;
- (void)updateClearButtonTrailingSpacing;
- (void)updateClearButtonVisibilityForVoiceMic;
- (void)inputBoxTextChanged:(id)arg1 isEditing:(BOOL)arg2;
- (void)inputBoxTextEditingDidBegin:(id)arg1;
- (void)inputBoxTextEditingDidEnd:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (id)searchButton;
- (void)setSearchButton:(id)arg1;
- (BOOL)didExposedCancelButton;
- (void)setDidExposedCancelButton:(BOOL)arg1;
- (BOOL)didExposedClearButton;
- (void)setDidExposedClearButton:(BOOL)arg1;
- (BOOL)didExposedCameraButton;
- (void)setDidExposedCameraButton:(BOOL)arg1;
- (id)searchBoxHeightConstraint;
- (void)setSearchBoxHeightConstraint:(id)arg1;
- (BOOL)voiceMicExcludesClearButton;
- (BOOL)greenMicLargeInputTransitionEnabled;
- (id)seperatorView;
- (void)setSeperatorView:(id)arg1;
- (BOOL)notRespondActionButtonHidden;
- (void)setNotRespondActionButtonHidden:(BOOL)arg1;
- (BOOL)largeInputActionButtonCenterAlignmentEnabled;
- (void)setLargeInputActionButtonCenterAlignmentEnabled:(BOOL)arg1;
- (double)rightActionButtonInitialHorizontalOffset;
- (double)lastLargeInputClearButtonVerticalOffset;
- (void)setLastLargeInputClearButtonVerticalOffset:(double)arg1;
- (id)greenMicLargeInputTransitionOverlay;
- (void)setGreenMicLargeInputTransitionOverlay:(id)arg1;
- (id)greenMicLargeInputBackgroundOverlay;
- (void)setGreenMicLargeInputBackgroundOverlay:(id)arg1;
- (id)greenMicLargeInputIconSnapshot;
- (void)setGreenMicLargeInputIconSnapshot:(id)arg1;
- (id)greenMicLargeInputTextSnapshot;
- (void)setGreenMicLargeInputTextSnapshot:(id)arg1;
- (id)greenMicLargeInputActionSnapshot;
- (void)setGreenMicLargeInputActionSnapshot:(id)arg1;
- (id)greenMicLargeInputTransitionText;
- (void)setGreenMicLargeInputTransitionText:(id)arg1;
- (BOOL)greenMicLargeInputTransitionPrepared;
- (void)setGreenMicLargeInputTransitionPrepared:(BOOL)arg1;
- (BOOL)greenMicLargeInputExpandedHeightEnabled;
- (void)setGreenMicLargeInputExpandedHeightEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@end
