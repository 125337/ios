'));card.countKey=countKey}
  r.date.textContent=dateLabel(p.time);
}
function setCover(id,image,version){const p=feedByID.get(id),card=cards.get(id);if(!p||!image||(version||0)<(p.coverVersion||0))return;p.image=image;p.coverVersion=version||0;if(card)updateCard(card,p)}
function scheduleLayout(){if(typeof requestAnimationFrame!=='function'){layoutCards();return}if(layoutFrame)return;layoutFrame=requestAnimationFrame(()=>{layoutFrame=0;layoutCards();scheduleVisible()})}
function layoutCards(){
  const list=[...grid.children].filter(card=>card.dataset.id);
  if(!list.length){grid.style.height='';columnPositions=[[],[]];return}
  const width=((grid.clientWidth||window.innerWidth||390)-40)/2,resized=width!==layoutWidth;
  layoutWidth=width;
  for(const card of list)if(resized||card.layoutDirty||!card.measuredHeight)card.style.width=width+'px';
  for(const card of list)if(resized||card.layoutDirty||!card.measuredHeight){card.measuredHeight=Math.ceil(card.getBoundingClientRect().height);card.layoutDirty=false}
  const y=[2,2];columnPositions=[[],[]];
  for(const card of list){let col=columnForID.get(card.dataset.id);if(col===undefined){col=y[0]<=y[1]?0:1;columnForID.set(card.dataset.id,col)}
    const left=(14+col*(width+12))+'px',top=y[col]+'px';
    if(card.style.left!==left)card.style.left=left;if(card.style.top!==top)card.style.top=top;
    columnPositions[col].push({id:card.dataset.id,top:y[col],bottom:y[col]+card.measuredHeight});y[col]+=card.measuredHeight+12;
  }
  const height=Math.max(...y)+'px';if(grid.style.height!==height)grid.style.height=height;
  gridTop=grid.getBoundingClientRect().top+(window.scrollY||0);chromeExpandedGridTop=gridTop+56*Math.max(0,searchProgress)-(searchPinned?12:0);
}
function matchesFilter(p){return !p.hidden&&(tab!=='liked'||p.liked)&&(tab!=='following'||p.following)&&(`${p.name} ${p.username} ${p.text}`).toLocaleLowerCase().includes(query.value.toLocaleLowerCase())}
function patchFeed(rows){
  let membershipChanged=false,geometryChanged=false;
  for(const patch of rows){const p=feedByID.get(patch.id);if(!p){setFeed(rows);return}const wasVisible=matchesFilter(p);if(tab==='liked'&&patch.time!==undefined&&Number(p.time)!==Number(patch.time))membershipChanged=true;Object.assign(p,preserveNewerCover(p,patch));if(wasVisible!==matchesFilter(p))membershipChanged=true;const card=cards.get(p.id);if(card){updateCard(card,p);if(card.layoutDirty)geometryChanged=true}}
  if(membershipChanged)render();else{if(geometryChanged)scheduleLayout();scheduleVisible()}
}
function render(){
  const list=feed.filter(matchesFilter);if(tab==='liked')list.sort((a,b)=>(Number(b.time)||0)-(Number(a.time)||0));
  const desired=[];
  for(const p of list){let card=cards.get(p.id);if(!card){card=createCard(p);cards.set(p.id,card)}updateCard(card,p);desired.push(card)}
  if(!desired.length){if(!feed.length)return;desired.push(element('p','empty',tab==='following'?'