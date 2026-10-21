(function(){var HEART='<svg viewBox="0 0 24 24"><path d="M12 21.35l-1.45-1.32C5.4 15.36 2 12.28 2 8.5 2 5.42 4.42 3 7.5 3c1.74 0 3.41.81 4.5 2.09C13.09 3.81 14.76 3 16.5 3 19.58 3 22 5.42 22 8.5c0 3.78-3.4 6.86-8.55 11.54L12 21.35z"/></svg>';
var BUB='<svg viewBox="0 0 24 24"><path d="M20 2H4c-1.1 0-2 .9-2 2v18l4-4h14c1.1 0 2-.9 2-2V4c0-1.1-.9-2-2-2zm0 14H6l-2 2V4h16v12z"/></svg>';
var PLAY='<svg viewBox="0 0 24 24" width="10" height="10" fill="currentColor"><path d="M8 5v14l11-7z"/></svg>';
var AV='data:image/svg+xml;utf8,<svg xmlns="http://www.w3.org/2000/svg" fill="%23ddd"><rect width="100" height="100"/></svg>';
var grid=document.getElementById('grid'),empty=document.getElementById('empty'),pullTip=document.getElementById('pull');
var newTip=document.getElementById('newTip');
// 架构=WCMoments 同构直译（WCMoments反编译/ui_extract js_00/01/02 铁证）：
// DOM 全量常驻（cards 永不回收，仅 clear 级清空）+ 滚动路径纯数据——
// layoutCards 产 columnPositions=[[],[]]（每列 {id,top,bottom} 序列），
// 可见性/媒体上报全部二分查找，滚动每帧零 DOM 遍历、零 gBCR、零重排。
// 旧虚拟回收方案（窗口 diff+元素池）废弃：方向错误且 bug 连环（appendChild
// 丢行白屏、续挂死、visPass 遍历 1893 children 正是 400-610ms 滚动冻结元凶）。
var cards={},ratios={},columnForID={},ALL=[],byId={},stale=false,q='',tab='all',pendingFresh=[];
var columnPositions=[[],[]],layoutWidth=0,layoutFrame=0,visibleFrame=0,gridTop=0,chromeExpandedGridTop=0;
var lastVisible='',searchPinned=false,searchProgress=0;
function fmtTime(t){if(!t)return '';
var d=new Date(t*1000),n=new Date();
var p=function(x){return x<10?'0'+x:''+x;
};
var hm=p(d.getHours())+':'+p(d.getMinutes());
var sd=function(a,b){return a.getFullYear()==b.getFullYear()&&a.getMonth()==b.getMonth()&&a.getDate()==b.getDate();
};
var y=new Date(n.getTime()-86400000);
if(sd(d,n))return '今天 '+hm;
if(sd(d,y))return '昨天 '+hm;
var md=(d.getMonth()+1)+'月'+d.getDate()+'日';
return d.getFullYear()==n.getFullYear()?md:d.getFullYear()+'年'+md;
}function el(t,c){var e=document.createElement(t);
if(c)e.className=c;
return e;
}function stat(svg,n){return '<div class="stat">'+svg+' '+(n||0)+'</div>';
}function mio(o){window.webkit.messageHandlers.mio.postMessage(o);
}
// rAF 合帧（WCM js_02 L5 同款）：layout 与 visible 同帧串行
function scheduleLayout(){if(layoutFrame)return;
layoutFrame=requestAnimationFrame(function(){layoutFrame=0;
layoutCards();
scheduleVisible();
});
}
// WCM js_02 L6-21 直译：测量缓存（resized/layoutDirty/未测才 gBCR）+ 数据布局
// 产 columnPositions——此后滚动路径纯二分，不再碰 children
function layoutCards(){
var list=[],i,c,chs=grid.children;
for(i=0;i<chs.length;i++){c=chs[i];
if(c.dataset&&c.dataset.id)list.push(c);
}
if(!list.length){grid.style.height='';
columnPositions=[[],[]];
return;
}
var width=((grid.clientWidth||window.innerWidth||390)-40)/2,resized=width!==layoutWidth;
layoutWidth=width;
for(i=0;i<list.length;i++){c=list[i];
if(resized||c.layoutDirty||!c.measuredHeight)c.style.width=width+'px';
}
for(i=0;i<list.length;i++){c=list[i];
if(resized||c.layoutDirty||!c.measuredHeight){c.measuredHeight=Math.ceil(c.getBoundingClientRect().height);
c.layoutDirty=false;
}}
var y=[2,2];
columnPositions=[[],[]];
for(i=0;i<list.length;i++){c=list[i];
var id=c.dataset.id,col=columnForID[id];
if(col===undefined){col=y[0]<=y[1]?0:1;
columnForID[id]=col;
}
var lft=(14+col*(width+12))+'px',top=y[col]+'px';
if(c.style.left!==lft)c.style.left=lft;
if(c.style.top!==top)c.style.top=top;
columnPositions[col].push({id:id,top:y[col],bottom:y[col]+c.measuredHeight});
y[col]+=c.measuredHeight+12;
}
var height=Math.max(y[0],y[1])+'px';
if(grid.style.height!==height)grid.style.height=height;
gridTop=grid.getBoundingClientRect().top+(window.scrollY||0);
chromeExpandedGridTop=gridTop+56*Math.max(0,searchProgress)-(searchPinned?12:0);
}
// WCM js_00 L46-54 直译：视口可见卡 id——列内二分（positions 按 top 升序），
// 视口缓冲 top-300/bottom+max(1800,2*vh)，上限 40
function visibleIDsForViewport(){
var viewportTop=(window.scrollY||0)-gridTop,top=viewportTop-300,bottom=viewportTop+window.innerHeight+Math.max(1800,window.innerHeight*2),ids=[],ci;
for(ci=0;ci<2;ci++){var positions=columnPositions[ci],lo=0,hi=positions.length;
while(lo<hi){var mid=(lo+hi)>>1;
if(positions[mid].bottom<top)lo=mid+1;
else hi=mid;
}
for(var j=lo;j<positions.length&&positions[j].top<bottom;j++)ids.push(positions[j].id);
}
return ids.slice(0,40);
}
// 可见性拍（WCM js_00 L61-65 同构）：rAF 合帧 → 二分取视口卡 → 视口内 img
// 切 eager + 媒体 key 上报（native 备图语义不变）。二分稳态零 DOM 遍历。
function scheduleVisible(){if(visibleFrame)return;
visibleFrame=requestAnimationFrame(function(){visibleFrame=0;
updateSearchChrome();
var ids=visibleIDsForViewport(),key=ids.join(','),vks=[];
if(key!==lastVisible){for(var i=0;i<ids.length;i++){var card=cards[ids[i]];
if(!card)continue;
if(card.parts.img&&card.parts.img.loading!=='eager')card.parts.img.loading='eager';
var img=card.parts.img;
if(card.parts.media&&img&&img.src.indexOf('mioimg://local/')===0)vks.push(img.src.split('/').pop().split('?')[0]);
}
lastVisible=key;
if(vks.length)mio({action:'visible',ids:vks.join(',')});
}
});
}
function matchesFilter(p){return (tab!=='liked'||p.liked>0)&&((p.name||'')+' '+(p.content||'')).toLowerCase().indexOf(q)>=0;
}
function visibleList(){var l=ALL;
if(pendingFresh.length&&tab==='all'&&!q)l=l.filter(function(it){return pendingFresh.indexOf(it.id)<0;
});
return l.filter(matchesFilter);
}
function buildMedia(card,item){var media=el('div','card-media');
var img=el('img');
img.loading='lazy';
img.decoding='async';
img.dataset.miokey=item.img.split('/').pop();
var sp=el('div','spin');
sp.innerHTML='<b><i></i><i></i><i></i></b>';
media.appendChild(sp);
img.onload=function(){if(sp.parentNode)sp.parentNode.removeChild(sp);
if(!ratios[item.id]&&img.naturalWidth>0){ratios[item.id]=img.naturalWidth/img.naturalHeight;
media.style.setProperty('--aspect',String(ratios[item.id]));
card.layoutDirty=true;
scheduleLayout();
}};
img.onerror=function(){if(sp.parentNode)sp.parentNode.removeChild(sp);
};
media.appendChild(img);
if(item.isVideo){var vt=el('div','mtag');
vt.innerHTML=PLAY+' 视频';
media.appendChild(vt);
}else if(item.imgCount>1){var it2=el('div','mtag');
it2.textContent=item.imgCount+'图';
media.appendChild(it2);
}if(ratios[item.id])media.style.setProperty('--aspect',String(ratios[item.id]));
card.parts.info?card.insertBefore(media,card.parts.info):card.appendChild(media);
card.parts.media=media;
card.parts.img=img;
}function createCard(item){var card=el('div','card');
card.dataset.id=item.id;
card.parts={};
var info=el('div','card-info');
var tt=el('div','title');
info.appendChild(tt);
var ur=el('div','user-row'),ul=el('div','user-left');
var av=el('img','avatar');
ul.appendChild(av);
var nm=el('div','name');
ul.appendChild(nm);
var rt=el('div','user-right');
ur.appendChild(ul);
ur.appendChild(rt);
info.appendChild(ur);
card.appendChild(info);
card.parts={info:info,media:null,img:null,tt:tt,av:av,nm:nm,rt:rt};
if(item.img)buildMedia(card,item);
return card;
}function updateCard(card,item){if(card.dataKey===item.rev)return;
card.dataKey=item.rev;
card.layoutDirty=true;
if(item.ratio>0&&!ratios[item.id])ratios[item.id]=item.ratio;
if(item.img&&!card.parts.media)buildMedia(card,item);
if(ratios[item.id]&&card.parts.media)card.parts.media.style.setProperty('--aspect',String(ratios[item.id]));
if(item.img){var s=card.parts.img.getAttribute('src');
if(s!==item.img){card.parts.img.dataset.fb='';
card.parts.img.src=item.img;
}}card.className=item.img?'card':'card text-only';
card.parts.tt.className='title'+((!item.img||item.isLargeText)?' large':'');
card.parts.tt.textContent=item.content||'';
card.parts.tt.style.display=item.content?'':'none';
var avSrc=item.avatar||AV;
if(card.parts.av.getAttribute('src')!==avSrc)card.parts.av.src=avSrc;
card.parts.nm.textContent=item.name||'';
card.parts.rt.innerHTML='<span style="font-size:12px;color:#999;">'+fmtTime(item.time)+'</span>'+stat(HEART,item.likes)+stat(BUB,item.cmt);
}
// render=WCM js_02 L28-32 + js_01 L2-6 直译：desired 数组（全量建卡/取卡，
// cards 永不回收）→ DOM 对齐（不在 desired 的 remove，insertBefore 保序）。
// 切 tab/搜索=一次性对齐（WCM 同款，低频可接受）；layoutDirty 卡触发重排。
function render(){
var list=visibleList();
var desired=[],i;
for(i=0;i<list.length;i++){var p=list[i],card=cards[p.id];
if(!card){card=createCard(p);
cards[p.id]=card;
}
updateCard(card,p);
desired.push(card);
}
empty.style.display=desired.length?'none':'block';
var chs=grid.children,membershipChanged=desired.length!==chs.length,j;
for(i=0;i<chs.length&&i<desired.length;i++)if(chs[i]!==desired[i]){membershipChanged=true;
break;
}
// 首建/全换：DocumentFragment 一次上屏（单次布局失效）。逐位 insertBefore 在
// live 集合上 O(N²)（1905 行全不对齐实测主线程冻结 5-15s=开面板卡死实证），
// WCM 不卡因其 render 恒为尾部增量（对齐循环命中快路径）；我们快照一次灌全量
if(chs.length===0&&desired.length){
for(i=chs.length-1;i>=0;i--)if(!chs[i].dataset||!chs[i].dataset.id)grid.removeChild(chs[i]);
var frag=document.createDocumentFragment();
for(i=0;i<desired.length;i++)frag.appendChild(desired[i]);
grid.appendChild(frag);
if(dirtyNew(desired))layoutCards();
scheduleVisible();
return;
}
var keepSet={},dirty=false;
for(i=0;i<desired.length;i++){keepSet[desired[i].dataset.id]=1;
if(desired[i].layoutDirty)dirty=true;
}
for(i=0;i<chs.length;i++)if(chs[i].dataset.id&&!keepSet[chs[i].dataset.id])grid.removeChild(chs[i]);
for(i=0;i<desired.length;i++)if(grid.children[i]!==desired[i])grid.insertBefore(desired[i],grid.children[i]||null);
if(membershipChanged&&tab==='liked')columnForID={};
if(membershipChanged||dirty)layoutCards();
scheduleVisible();
}
// 新建卡的脏标记统计（fragment 路径用）：任一卡 layoutDirty 即需重排
function dirtyNew(desired){for(var i=0;i<desired.length;i++)if(desired[i].layoutDirty)return true;
return false;
}
function updateStale(){var t=document.getElementById('staleTag');
if(t)t.style.display=stale?'block':'none';
}window.__mioFeedSnapshot=function(p){ALL=(p&&p.items)||[];
byId={};
for(var i=0;
i<ALL.length;
i++)byId[ALL[i].id]=ALL[i];
stale=ALL.length>0;
render();
updateStale();
};
// patch（WCM js_02 L23-27 同构）：patchOnly 逐行 assign+updateCard，
// 可见性成员变化（liked 翻转/搜索命中变化）才全量 render，否则按需重排
window.__mioFeedPatch=function(p){var ups=(p&&p.upsert)||[],rm=(p&&p.remove)||[],i,id;
var known={};
for(i=0;
i<ALL.length;
i++)known[ALL[i].id]=1;
var fresh=[],patchOnly=rm.length===0&&!(p&&p.order)&&ups.length>0;
for(i=0;
i<ups.length;
i++){id=ups[i].id;
if(!byId[id]&&!known[id]){fresh.push(id);
patchOnly=false;
}}if(patchOnly){var membershipChanged=false,geometryChanged=false;
for(i=0;
i<ups.length;
i++){var t=byId[ups[i].id],c2=cards[ups[i].id];
for(var k in ups[i])t[k]=ups[i][k];
var wasVisible=matchesFilter(t);
if(c2){updateCard(c2,t);
if(c2.layoutDirty)geometryChanged=true;
}if(wasVisible!==matchesFilter(t))membershipChanged=true;
}
if(membershipChanged)render();
else{if(geometryChanged)scheduleLayout();
scheduleVisible();
}stale=false;
return;
}for(i=0;
i<rm.length;
i++){delete byId[rm[i]];
var dc=cards[rm[i]];
if(dc&&dc.parentNode)dc.parentNode.removeChild(dc);
delete cards[rm[i]];
delete columnForID[rm[i]];
}
for(i=0;
i<ups.length;
i++){id=ups[i].id;
if(!byId[id]&&!known[id])fresh.push(id);
byId[id]=ups[i];
}if(p&&p.order){ALL=p.order.map(function(k){return byId[k];
}).filter(Boolean);
}else{ALL=ALL.map(function(it){return byId[it.id];
}).filter(Boolean);
for(i=fresh.length-1;
i>=0;
i--)ALL.unshift(byId[fresh[i]]);
}stale=false;
updateStale();
if((window.scrollY||0)>600&&tab==='all'&&!q){for(i=0;
i<fresh.length;
i++){if(pendingFresh.indexOf(fresh[i])<0)pendingFresh.push(fresh[i]);
}if(pendingFresh.length){newTip.style.display='block';
newTip.textContent=pendingFresh.length+' 条新动态';
}}render();
};
window.__mioMediaReady=function(k){var i=document.querySelector('img[data-miokey="'+k+'"]');
if(i){i.src='mioimg://local/'+k+'?r='+(Date.now());
return;
}for(var rid in cards){var c=cards[rid];
if(c.parts.img&&c.parts.img.dataset.miokey===k){c.dataKey=0;
break;
}}};
window.__mioDiag=function(){try{var g=document.getElementById('grid');
return JSON.stringify({all:ALL.length,cards:Object.keys(cards).length,dom:g?g.childElementCount:-1,emp:empty.style.display||'?',cp0:columnPositions[0].length,cp1:columnPositions[1].length});
}catch(e){return 'DIAG-EXC:'+e.message;
}};
window.__mioSetBadge=function(n){var b=document.getElementById('bellBadge');
if(!b)return;
if(n>0){b.textContent=n>99?'99+':n;
b.classList.remove('hide');
}else{b.classList.add('hide');
}};
var qEl=document.getElementById('q');
qEl.addEventListener('input',function(){q=this.value.trim().toLowerCase();
columnForID={};
render();
window.scrollTo(0,0);
});
var hd=document.getElementById('hd'),menu=document.getElementById('menu'),sb=document.getElementById('sb');
function closeMenu(){menu.classList.remove('show');
}document.getElementById('tab-all').addEventListener('click',function(){tab='all';
this.classList.add('active');
document.getElementById('tab-liked').classList.remove('active');
document.querySelector('.tabs').style.setProperty('--ti',0);
columnForID={};
render();
window.scrollTo(0,0);
});
document.getElementById('tab-liked').addEventListener('click',function(){tab='liked';
this.classList.add('active');
document.getElementById('tab-all').classList.remove('active');
document.querySelector('.tabs').style.setProperty('--ti',1);
columnForID={};
render();
window.scrollTo(0,0);
});
document.getElementById('ibMore').addEventListener('click',function(e){e.stopPropagation();
menu.classList.toggle('show');
});
document.getElementById('ibBell').addEventListener('click',function(){mio({action:'inbox'});
});
newTip.addEventListener('click',function(){window.scrollTo({top:0,behavior:'smooth'});
});
document.getElementById('ibAdd').addEventListener('click',function(){mio({action:'publish'});
});
sb.addEventListener('click',function(){if(window.scrollY>72)window.scrollTo({top:0,behavior:'smooth'});
setTimeout(function(){qEl.focus();
},90);
});
document.getElementById('mi-refresh').addEventListener('click',function(){closeMenu();
mio({action:'refresh'});
});
document.getElementById('mi-text').addEventListener('click',function(){closeMenu();
mio({action:'publishText'});
});
document.getElementById('mi-native').addEventListener('click',function(){closeMenu();
mio({action:'back'});
});
document.addEventListener('click',function(e){if(!menu.contains(e.target))closeMenu();
});
qEl.addEventListener('focus',function(){searchPinned=true;
setCollapse(0);
});
qEl.addEventListener('blur',function(){searchPinned=false;
setCollapse((window.scrollY||0)>=72?1:0);
});
var curC=0,trTimer=0;
function setCollapse(v){if(v===curC)return;
hd.classList.add('str');
if(trTimer)clearTimeout(trTimer);
trTimer=setTimeout(function(){hd.classList.remove('str');
},380);
curC=v;
hd.style.setProperty('--collapse',v);
}function updateSearchChrome(){var y=window.scrollY||0;
setCollapse(searchPinned?0:(y>=72?1:(y<=16?0:curC)));
}var tsy=0,pulled=false;
document.addEventListener('touchstart',function(e){tsy=e.touches[0].clientY;
},{passive:true});
document.addEventListener('touchmove',function(e){var dy=e.touches[0].clientY-tsy;
if(!pulled&&window.scrollY<=0&&dy>80){pulled=true;
pullTip.style.top='0px';
mio({action:'refresh'});
}},{passive:true});
document.addEventListener('touchend',function(){setTimeout(function(){pulled=false;
if(pullTip.style.top==='0px')pullTip.style.top='-30px';
},2500);
},false);
// tail 供给（我们独有，WCM 用 sentinel+IntersectionObserver，语义同位）：
// 滚底发 more、离底发 tailStop——Engine 翻页循环依赖这两个信号
var moreActive=false;
function mioTailCheck(){var nb=window.scrollY+window.innerHeight>document.body.scrollHeight-600;
if(nb&&!moreActive){moreActive=true;
mio({action:'more'});
}else if(!nb&&moreActive){moreActive=false;
mio({action:'tailStop'});
}}window.addEventListener('scroll',function(){updateSearchChrome();
scheduleVisible();
if(pendingFresh.length&&(window.scrollY||0)<100){pendingFresh=[];
newTip.style.display='none';
render();
}mioTailCheck();
},{passive:true});
window.addEventListener('resize',function(){layoutWidth=0;
scheduleLayout();
});
mioTailCheck();
fetch('miosnap://feed.json').then(function(r){return r.ok?r.json():null;
}).then(function(d){if(d&&d.items&&d.items.length&&!ALL.length)window.__mioFeedSnapshot(d);
}).catch(function(){});
})();
