<tr class="<%evenodd%>">
  <td style="background: <%player.teamcolor%>; color: <%player.teamcolor%>;"><%player.teamid%>&#160;</td>
  <td><%player.name%></td>
  <!-- kf2-autokick -->
  <td><%player.perk.name%></td>
  <td class="center"><%player.perk.level%></td>
  <!-- /kf2-autokick -->
  <td class="right"><%player.ping%></td>
  <td><%player.ip%></td>
  <td><%player.uniqueid%></td>
  <td><%player.steamid%></td>
  <td><%player.steamname%></td>
  <td class="center"><%player.admin%></td>
  <td class="center"><%player.spectator%></td>
  
  <td>
    <form method="post" action="<%page.fulluri%>">
      <div>
        <input type="hidden" name="playerid" value="<%player.playerid%>" />
        <input type="hidden" name="playerkey" value="<%player.playerkey%>" />
        <select name="action">
          <option value=""></option>
          <%actions%>
        </select>
        <button type="submit">go</button>
      </div>
    </form>
  </td>
</tr>
<!-- kf2-autokick -->
<span
    class="kf2gameinfo"
    data-kf2gameinfo='
        {
            "perkName": "<%player.perk.name%>",
            "perkLevel": "<%player.perk.level%>",
            "dosh": "<%player.score%>",
            "health": "<%player.pawn.health%>",
            "kills": "<%player.kills%>",
            "ping": "<%player.ping%>",
            "ip": "<%player.ip%>",
            "isAdmin": "<%player.admin%>",
            "isSpectator": "<%player.spectator%>",
            "id": "<%player.playerid%>",
            "key": "<%player.playerkey%>"
        }
    '
></span>
<!-- /kf2-autokick -->
