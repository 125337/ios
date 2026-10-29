@interface WCAdRockPaperScissorsTitleAreaView : UIView
{
    WCAdRockPaperScissorsInfo * _adRockPaperScissorsInfo; // +0x8
    id <WCAdRockPaperScissorsTitleAreaDelegate> _delegate; // +0x10
    WCAdPagView * _leftDecorPagView; // +0x18
    WCAdPagView * _rightDecorPagView; // +0x20
    WCAdURLImageView * _titleLeftIconView; // +0x28
    WCAdURLImageView * _titleRightIconView; // +0x30
    MMUILabel * _titleView; // +0x38
    MMUILabel * _descView; // +0x40
}
- (id)initWithFrame:(CGRect)arg1 adRockPaperScissorsInfo:(id)arg2 delegate:(id)arg3;
- (void)generateSubviews;
- (void)layoutSubviews;
- (id)leftDecorPagView;
- (id)rightDecorPagView;
- (double)fetchWidthWithHeight:(double)arg1 oriWidth:(double)arg2 oriHeight:(double)arg3;
- (id)titleLeftIconView;
- (id)titleRightIconView;
- (id)titleView;
- (id)descView;
- (void)prepare;
- (void)start;
- (void)pause;
- (void)stop;
- (id)fetchDescWording;
- (void)updateDescWording;
- (id)rockPaperScissorsLogic;
- (id)adRockPaperScissorsInfo;
- (void)setAdRockPaperScissorsInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setLeftDecorPagView:(id)arg1;
- (void)setRightDecorPagView:(id)arg1;
- (void)setTitleLeftIconView:(id)arg1;
- (void)setTitleRightIconView:(id)arg1;
- (void)setTitleView:(id)arg1;
- (void)setDescView:(id)arg1;
- (void).cxx_destruct;
@end
