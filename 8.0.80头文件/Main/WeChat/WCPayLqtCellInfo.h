@interface WCPayLqtCellInfo : NSObject <NSCoding>
{
    int _is_show_cell; // +0x8
    int _is_open_lqt; // +0xc
    NSString * _cell_icon; // +0x10
    NSString * _lqt_open_url; // +0x18
    NSString * _lqt_title; // +0x20
    NSString * _lqt_wording; // +0x28
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (int)is_show_cell;
- (void)setIs_show_cell:(int)arg1;
- (id)cell_icon;
- (void)setCell_icon:(id)arg1;
- (int)is_open_lqt;
- (void)setIs_open_lqt:(int)arg1;
- (id)lqt_open_url;
- (void)setLqt_open_url:(id)arg1;
- (id)lqt_title;
- (void)setLqt_title:(id)arg1;
- (id)lqt_wording;
- (void)setLqt_wording:(id)arg1;
- (void).cxx_destruct;
@end
