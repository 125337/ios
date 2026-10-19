'))}
  const membershipChanged=desired.length!==grid.children.length||desired.some((card,i)=>grid.children[i]!==card);
  const keep=new Set(desired);for(const child of [...grid.children])if(!keep.has(child))child.remove();
  desired.forEach((card,i)=>{if(grid.children[i]!==card)grid.insertBefore(card,grid.children[i]||null)});
  if(membershipChanged&&tab==='liked')columnForID.clear();
  if(membershipChanged||desired.some(card=>card.layoutDirty))layoutCards();scheduleVisible();
}
function resetSwipeFeedback(){const tabs=document.getElementById('feed-tabs');if(tabs){tabs.style.setProperty('--tab-duration','.23s');tabs.style.setProperty('--tab-drag','0px')}}
const tabOrder=['all','liked','following'];
let swipe=null,suppressTapUntil=0;
function selectTab(next,direction=0){
  if(!tabOrder.includes(next)||next===tab)return;
  tab=next;columnForID.clear();document.getElementById('feed-tabs')?.style.setProperty('--tab-index',String(tabOrder.indexOf(tab)));
  document.querySelectorAll('[data-tab]').forEach(b=>{const active=b.dataset.tab===tab;b.classList.toggle('active',active);b.setAttribute('aria-selected',String(active))});
  render();

  if(typeof requestAnimationFrame==='function')requestAnimationFrame(requestMoreIfNeeded);
}
document.addEventListener('touchstart',e=>{
  swipe=null;if(e.touches.length!==1||e.target.closest('input,textarea,button,summary,details'))return;
  const t=e.touches[0],width=window.innerWidth||390;
  if(t.clientX<24||t.clientX>width-24)return;
  swipe={x:t.clientX,y:t.clientY,axis:'',dx:0};
},{passive:true});
document.addEventListener('touchmove',e=>{
  if(!swipe)return;if(e.touches.length!==1){swipe=null;resetSwipeFeedback();return}
  const dx=e.touches[0].clientX-swipe.x,dy=e.touches[0].clientY-swipe.y;
  if(!swipe.axis&&Math.max(Math.abs(dx),Math.abs(dy))>12)swipe.axis=Math.abs(dx)>Math.abs(dy)*1.4?'horizontal':'vertical';
  if(swipe.axis!=='horizontal')return;
  if(e.cancelable)e.preventDefault();swipe.dx=dx;const tabs=document.getElementById('feed-tabs');if(tabs){tabs.style.setProperty('--tab-duration','0s');tabs.style.setProperty('--tab-drag',`${Math.max(tab==='all'?0:-22,Math.min(tab==='following'?0:22,-dx*.15))}px`)}
},{passive:false});
document.addEventListener('touchend',()=>{
  const gesture=swipe;swipe=null;resetSwipeFeedback();
  if(!gesture||gesture.axis!=='horizontal')return;
  suppressTapUntil=Date.now()+350;if(Math.abs(gesture.dx)<64)return;
  const direction=gesture.dx<0?1:-1,index=tabOrder.indexOf(tab)+direction;
  if(index>=0&&index<tabOrder.length)selectTab(tabOrder[index],direction);
},{passive:true});
document.addEventListener('touchcancel',()=>{swipe=null;resetSwipeFeedback()},{passive:true});
function closeAuthorMenu(){const menu=document.getElementById('author-menu'),dismiss=document.getElementById('author-dismiss');if(menu)menu.hidden=true;if(dismiss)dismiss.hidden=true}
function positionAuthorMenu(anchor){const menu=document.getElementById('author-menu'),dismiss=document.getElementById('author-dismiss');if(!menu||!dismiss)return;menu.hidden=false;dismiss.hidden=false;const rect=anchor.getBoundingClientRect(),height=menu.getBoundingClientRect().height,width=window.innerWidth||390;menu.style.left=Math.max(12,Math.min(width-222,rect.left+rect.width/2-105))+'px';const below=rect.bottom+8;menu.style.top=Math.max(70,below+height<(window.innerHeight||800)-84?below:rect.top-height-8)+'px'}
function authorMenuButton(label,action,username){const button=element('button','');const names={follow:label==='