@interface FTSAiHistoryCell : MMTableViewCell
{
    AttributeLabel * _titleLabel; // +0x8
    AttributeLabel * _detailLabel; // +0x10
    MMUILabel * _timeLabel; // +0x18
    AiHistoryMsg * _msg; // +0x20
    NSArray * _titleKeywords; // +0x28
    NSArray * _detailKeywords; // +0x30
}
- (BOOL)isTrailSurrogates:(unsigned short)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)updateWithItem:(id)arg1 titleKeywords:(id)arg2 detailKeywords:(id)arg3;
- (id)sliceText:(id)arg1 withKeywords:(id)arg2 withLabelWidth:(double)arg3 withFontSize:(double)arg4;
- (void)layoutSubviews;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)detailLabel;
- (void)setDetailLabel:(id)arg1;
- (id)timeLabel;
- (void)setTimeLabel:(id)arg1;
- (id)msg;
- (void)setMsg:(id)arg1;
- (id)titleKeywords;
- (void)setTitleKeywords:(id)arg1;
- (id)detailKeywords;
- (void)setDetailKeywords:(id)arg1;
- (void).cxx_destruct;
@end
