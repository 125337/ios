@interface WeAppGameJoinTeamDescView : UIView
{
    MMUILabel * _scoreLable; // +0x8
    MMUILabel * _additionLabel; // +0x10
    MMUILabel * _memberLabel; // +0x18
}
- (id)initWithParmas:(id)arg1;
- (void)initUI:(id)arg1;
- (void)layoutUI;
- (id)getTitle;
- (id)getTeamupDesc;
- (id)getMemberDesc;
- (id)scoreLable;
- (void)setScoreLable:(id)arg1;
- (id)additionLabel;
- (void)setAdditionLabel:(id)arg1;
- (id)memberLabel;
- (void)setMemberLabel:(id)arg1;
- (void).cxx_destruct;
@end
