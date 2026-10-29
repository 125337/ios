@interface WCPayLQTEnteranceInfo : NSObject <PBCoding>
{
    unsigned int _lqt_state; // +0x8
    int _is_show_cell; // +0xc
    int _is_open_lqt; // +0x10
    NSString * _lct_wording; // +0x18
    NSString * _lct_url; // +0x20
    NSString * _cell_icon; // +0x28
    NSString * _lqt_open_url; // +0x30
    NSString * _lqt_title; // +0x38
    NSString * _lqt_wording; // +0x40
}
+ (void)PBArrayAdd_lct_wording;
+ (void)PBArrayAdd_lqt_state;
+ (void)PBArrayAdd_lct_url;
+ (void)PBArrayAdd_is_show_cell;
+ (void)PBArrayAdd_cell_icon;
+ (void)PBArrayAdd_is_open_lqt;
+ (void)PBArrayAdd_lqt_open_url;
+ (void)PBArrayAdd_lqt_title;
+ (void)PBArrayAdd_lqt_wording;
+ (void)initialize;
+ (id)getLocalLQTEnteranceInfo;
+ (BOOL)saveLQTEnteranceInfo:(id)arg1;
- (id)getPBPropertyTable;
- (id)lct_wording;
- (void)setLct_wording:(id)arg1;
- (unsigned int)lqt_state;
- (void)setLqt_state:(unsigned int)arg1;
- (id)lct_url;
- (void)setLct_url:(id)arg1;
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
